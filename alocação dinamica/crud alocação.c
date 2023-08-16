#include <stdio.h>
#include <string.h>
typedef struct{
    char nome[50];
    int idade;
    char sexo;
}info;

info faz(){
    info pessoa;
    scanf(" %[^\n]", pessoa.nome);
    scanf(" %d %c", &pessoa.idade, &pessoa.sexo);
    return pessoa;
}

info* insere(int qtd, info id[qtd], info cadastra){
    id = (info*)realloc(id, sizeof(info) * (qtd+1));
    id[qtd] = cadastra;
    return id;
}

info* deleta(int qtd, info id[qtd], int j){
    int aux = 0;
    info *pessoa = malloc(sizeof(info) * (qtd-1));
    for(int i=0; i<qtd; i++){
        if (j != i){
            pessoa[aux] = id[i];
            aux++;
  }
}
    return pessoa;
}

int main(){
char comando;
int ins=0;
int i,j,aux=0;
info *id, del;
id = malloc(sizeof(info));
    
 while (1){
  scanf("%c", &comando);
  if(comando == 'p'){
    break;
}
  else if(comando == 'i'){
    id = insere(ins, id, faz());
    ins++;
}   
  else if(comando == 'd'){
    del = faz();
    for(j=0; j<ins; j++){
      if(strcmp(id[j].nome, del.nome) == 0 && id[j].sexo == del.sexo && id[j].idade == del.idade){
        id = deleta(ins, id, j);
           ins--;
    }
  }
}
}        
  for(i=0; i<ins; i++){
        printf("%s,%d,%c\n", id[i].nome, id[i].idade, id[i].sexo);
}

    return 0;
}
//Summer-Rose Conroy
27
F
i
Dawood Powell
15
M
d
Dilan Villa
10
F
i
Baxter Hamilton
58
M
d
Rudra Salt
11
F
d
Pedro Smyth
68
F
i
Rylee Berg
69
F
i
Harun Cullen
49
F
d
Dawood Powell
15
M
i
Akbar Barrett
95
M
d
Baxter Hamilton
58
M
i
Shayaan Quintana
84
F
i
Akbar Barrett
65
M
d
Abu Wagstaff
77
F
i
Dilan Villa
60
M
p