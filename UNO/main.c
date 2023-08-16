#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"
///** Constantes para as strings a serem lidas */
#define MAX_LINE 100
#define MAX_ACTION 10
#define MAX_ID_SIZE 10

void debug(char *message) { 
	fprintf(stderr, "%s\n", message);
}
// gcc main.c funcoes.c structs.h -o  botteste -Wno-unused-result testar bot novo com alteração
// -v -s 94500 1243 3859 87728 64458 47164 -max 
//   "COMPRE 4"   : C = CORINGA
//   "COMPRE 2"   : V = VALETE
//   "VOLTA"      : D = DAMA
//   "PULA A VEZ" : R = REI
//   "MUDE A COR" : A = ÀS (muda o naipe)

int main(){

char temp[MAX_LINE]; // string para leitura temporária de dados
char my_id[MAX_ID_SIZE]; // EU
char action[MAX_ACTION];
char complement[MAX_LINE]; // complemento basico
carta cartaMesa; // carta atual na mesa
int V_C=0; // ver se precisa puxar carta +2 +4
char complemento2[4]; // usado pra mudar cor

mao *minha = malloc(sizeof(mao)); // faz/cria a mão
minha->cartas = malloc(sizeof(carta) * 7);
minha->count = 7; // maximo 7 cartas no começo

setbuf(stdin, NULL); // stdin, stdout e stderr não terão buffers
setbuf(stdout, NULL); // assim, nada é "guardado temporariamente"
setbuf(stderr, NULL);
// leitura jogadores da partida
scanf("PLAYERS %[^\n]\n", temp);
scanf("YOU %s\n", my_id);
// leitura minha mao 
scanf("HAND %[^\n]\n", temp);
guardaMao(temp, minha); // função pra guarda as cartas passada na mão
// leitura da mesa
scanf("TABLE %s\n", temp);
cartaMesa = lerCarta(temp); // carta atual na mesa


while (1) {
  do {  
  // ação/complemento do bot
	scanf("%s %s", action, complement);   
  if (strcmp(action, "DISCARD") == 0){
    // bota a carta na mesa/salva carta no programa
    cartaMesa = lerCarta(complement);
    // se for V ou C(+2 +4)
    if (testaV(cartaMesa) || testaC(cartaMesa)){
      V_C = 1; // 1 se precisar puxar 0 se n
  }
    // se for A ou C (mudar cor ou +4)
    if (testaA(cartaMesa) || testaC(cartaMesa)){
	  // le o 2 complemento(nova cor)
    	scanf(" %s", complemento2);
    // troca o naipe(cor) da mesa
      strcpy(cartaMesa.naipe, complemento2);
  }
}
// fim turno deles
} while (strcmp(action, "TURN") || strcmp(complement, my_id));
  // turno do meu bot
  // quando for +2 +4
if (V_C){
  if (testaC(cartaMesa)){
    compraCarta(4, minha);
} 
  else if (testaV(cartaMesa)){
    compraCarta(2, minha);
}
  V_C = 0;
  continue;
}
  // carta pra descartar
carta discarte = escolheDescarte(minha, cartaMesa);
  if (!testaVazio(discarte)){
    descarta(discarte, minha, &cartaMesa);
} 
  else{
    compraCarta(1, minha); // ou puxar caso n tenha
  }
}
  return 0;
}