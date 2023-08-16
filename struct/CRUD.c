#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    char sexo;
}info;

void faz(int qtd, info id[qtd]){
    scanf(" %[^\n]", id[qtd].nome);
    scanf(" %d %c", &id[qtd].idade, &id[qtd].sexo);
}

void deleta(int tam, info del[tam]){
    scanf(" %[^\n]", del[tam].nome);
    scanf(" %d %c", &del[tam].idade, &del[tam].sexo);
}

int main(){
char comando;
int j,k;
int tam=0, ins=0;
info dados[100], del[1];

while (1>0){
    scanf("%c", &comando);
    if(comando == 'p'){
        break;
}
    else if(comando == 'i'){
        faz(ins, dados);
        ins++;
}   
    else if(comando == 'd'){
        deleta(tam, del);
        for(int j=0; j<ins; j++){
            if(strcmp(dados[j].nome, del[tam].nome) == 0 && dados[j].sexo == del[tam].sexo && dados[j].idade == del[tam].idade){
                for(k=j; k<ins-1; k++){
                strcpy(dados[k].nome, dados[k+1].nome);
                dados[k].idade = dados[k+1].idade;
                dados[k].sexo = dados[k+1].sexo;
                }
                ins--;
   }
  }
 }
}

for(j=0; j<ins; j++){
    printf("%s,%d,%c\n", dados[j].nome, dados[j].idade, dados[j].sexo);
}

    return 0;
}
// 
Summer-Rose Conroy
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