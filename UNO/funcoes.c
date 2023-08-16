#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"


// Verifica se os números de duas cartas são iguais
int testaNumero(carta carta1, carta carta2) {
	if (strcmp(carta1.numero, carta2.numero) == 0) {
    	return 1;
  	}
  	return 0;
}
// todos abaixo sao para testar o tipo de carta
int testaV(carta cartaMesa) { // +2
  	carta v = {.numero = "V"};
  	if(testaNumero(v, cartaMesa)){
		return 1;
	}
	return 0;
}

int testaC(carta cartaMesa) { // +4
  	carta c = {.numero = "C"};
  	if(testaNumero(c, cartaMesa)){
		return 1;
	}
	return 0;
}

int testaA(carta cartaMesa) { // muda cor
  	carta a = {.numero = "A"};
  	if(testaNumero(a, cartaMesa)){
		return 1;
	}
	return 0;
}

int testaD(carta cartaMesa) { // volta
  	carta d = {.numero = "D"};
  	if(testaNumero(d, cartaMesa)){
		return 1;
	}
	return 0;
}

int testaR(carta cartaMesa) { // pular
  	carta r = {.numero = "R"};
  	if(testaNumero(r, cartaMesa)){
		return 1;
	}
	return 0;
}

int testaVazio(carta cartaMesa) { // ver se ta vazio(se ainda tem carta)
  	carta vazio = {0};
	if(testaNumero(cartaMesa, vazio)){
		return 1;
	}
	return 0;
}

// apenas ver se e igual
int testaIgualdade(carta carta1, carta carta2) {
	if (strcmp(carta1.numero, carta2.numero) == 0 &&
    	strcmp(carta1.naipe, carta2.naipe) == 0) {
    	return 1;
	}
  return 0;
}
//tirar carta na mao
void removeCarta(mao *minha, carta card) {
int i,j;
	for (i = 0; i < minha->count; i++) {// ate o tamanho da mao
    if (testaIgualdade(minha->cartas[i], card) == 1) {
      for (j = i; j < minha->count; j++) {
        minha->cartas[j] = minha->cartas[j + 1];// a carta igual e substituida pela proxima
}

      	minha->count -= 1;
      	minha->cartas = realloc(minha->cartas, sizeof(carta) * minha->count);
      	break;
    	}
}
}

// basicamente pra ver se a carta existe
int qual(char *texto, char letra) {
int i;
	for (i = 0; i < 100; i++) {
    if (texto[i] == 0)
      break;
    if (texto[i] == letra)
      return 1;
  }
  return 0;
}

// recebe o texto da carta e retorna uma Carta
carta lerCarta(char *texto) {
int i;
carta card = {0};
int cont_naipe = 0;

	for (i = 0; i < strlen(texto); i++) {
    if ((texto[i] >= 48 && texto[i] <= 57) ||
      qual("VADCR", texto[i]) == 1) { //quando for 1-9 e especiais
      card.numero[i] = texto[i];
      card.numero[i+1] = 0;// proxima n existe
} 
    else { // agora o naipe
      card.naipe[cont_naipe] = texto[i];
      cont_naipe++;
  }
}

  	card.naipe[cont_naipe + 1] = 0;// proxima n existe

	return card;
}

// +1 carta na mao
void pegaCarta(mao *minha, char *texto) {
carta nova = lerCarta(texto);
minha->count += 1;
  
minha->cartas = realloc(minha->cartas, (minha->count) * sizeof(carta));

minha->cartas[minha->count-1] = nova; // n sei pq mas precisa do -1, se n explode
}

// guarda as cartas passada pela string
void guardaMao(char *temp, mao *minha) {
int cont = 0;
char *aux = strtok(temp, " ");

	// passa por todo o texto recebido sem ser o espaço e [] https://www.tutorialspoint.com/c_standard_library/c_function_strtok.htm
	while (aux != NULL) {
    	if (aux[0] != '[' && aux[0] != ']') {
      	minha->cartas[cont] = lerCarta(aux);//pega cada carta dps do espaço e guarda
      	cont++;
    	}
    aux = strtok(NULL, " ");
  	}
}

// ver se o naipe sao iguais(cor)
int testaNaipe(carta carta1, carta carta2) {
	if(strcmp(carta1.naipe, carta2.naipe) == 0){
		return 1;
	}
	return 0;
}


// retorna o naipe(cor) com maior quantidade
carta escolheNaipe(mao *minha) {
	typedef struct {
    	carta card;
    	int qtd;
  	} numCartas;
int i,j;
// cada cor com qtd 0
numCartas copas = {.qtd = 0};
strcpy(copas.card.naipe, "♥");

numCartas espada = {.qtd = 0};
strcpy(espada.card.naipe, "♠");

numCartas paus = {.qtd = 0};
strcpy(paus.card.naipe, "♣");

numCartas ouro = {.qtd = 0};
strcpy(ouro.card.naipe, "♦");

numCartas cards[] = {copas, espada, paus, ouro};// comparar no testaNaipe

  for (i = 0; i < minha->count; i++) {
    for (j = 0; j < 4; j++) {
      if (testaNaipe(minha->cartas[i], cards[j].card) && !qual("CA", minha->cartas[i].numero[0])) {// compara e +1 pra cada iguail
        cards[j].qtd += 1;
    }
  }
}

int maior = -1; // menor que 0, pra qualquer quantidade ser a maior
carta naipe = {0};// 0 caso seja vazio

  for (i = 0; i < 4; i++) {
    if (cards[i].qtd > maior) {
      maior = cards[i].qtd; // maior quantidade
      naipe = cards[i].card; 
  }
}

  	return naipe;
}

// manda a carta que descarto/remove do jogo
void descarta(carta discarte, mao *minha, carta *cartaMesa) {
printf("DISCARD %s%s", discarte.numero, discarte.naipe); // basico
*cartaMesa = discarte;
// se for um A ou C(muda cor ou +4)
if (testaA(discarte) || testaC(discarte)) {
  carta tipo = escolheNaipe(minha); // melhor cor
  strcpy(cartaMesa->naipe, tipo.naipe);
  printf(" %s\n", tipo.naipe)	;
}
  printf("\n");
  removeCarta(minha, discarte);
}

//+2 +4
void compraCarta(int qtd, mao *minha) {
char temp[100];
int i;
printf("BUY %d\n", qtd);

// le e adiciona as cartas
  for (i = 0; i < qtd; i++) {
    scanf("%s\n", temp);
    pegaCarta(minha, temp);
  }
}

carta escolheDescarte(mao *minha, carta cartaMesa) {
carta mais = escolheNaipe(minha); // maior qtd de cor

carta melhor = {0};
carta descarte = {0};
carta muda = {0};
carta valete = {0};
carta rei = {0};
//   "COMPRE 4"   : C = CORINGA
//   "COMPRE 2"   : V = VALETE
//   "VOLTA"      : D = DAMA
//   "PULA A VEZ" : R = REI
//   "MUDE A COR" : A = ÀS (muda o naipe)
// olha todas as cartas
for (int i = 0; i < minha->count; i++) {
  carta atual = minha->cartas[i];

  if (testaV(atual) && testaNaipe(atual, cartaMesa)) {
    valete = atual;
}
  if (testaR(atual) && testaNaipe(atual, cartaMesa)) {
    rei = atual;
}
  if (testaC(atual) || testaA(atual)) {
    muda = atual;
}
  if ((testaNumero(atual, cartaMesa) || testaNaipe(atual, cartaMesa)) && !testaC(atual) && !testaA(atual)) { // apenas cor ou numero certo
    descarte = atual;
}
  if (testaNumero(atual, cartaMesa) && testaNaipe(atual, mais)) {// cor(maior qtd) e numero certo
      melhor = atual;
 } 
}
  if (!testaVazio(melhor)) {// se tiver uma melhor
    return melhor;
}
 	// se tiver uma carta pra jogar
  else if (!testaVazio(descarte)) {
    return descarte;
} 
  else if (!testaVazio(muda)) {
    	return muda;
}
    else if (!testaVazio(rei)) {
    	return rei;
}
    else if (!testaVazio(valete)) {
    	return valete;
}
  return descarte;
}

