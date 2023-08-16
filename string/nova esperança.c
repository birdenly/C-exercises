#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' '};

int main(){
    int chave,chave1,y=0,i,j=0,x,invalido=0,k,r;
    char letra;
    int temp;
    int lista[4];
    char mensagem[200];

    scanf("%d", &chave);
    scanf(" %[^\n]", mensagem);

    chave1=chave;

    if (chave>9999){
        printf("Chave invalida!");
    }
    else{
        while (chave1 != 0) {
            r = chave1 % 10;
      
            lista[y] = r;
            y++;
      
            chave1 = chave1 / 10;
        }

        for(int i = 0; i<4/2; i++){
            temp = lista[i];
            lista[i] = lista[4-i-1];
            lista[4-i-1] = temp;
        }

        for(i=0; i<strlen(mensagem); i++){
            if (islower(mensagem[i]) || mensagem[i] == '!'){
                printf("Caractere invalido na entrada!");
                invalido =1;
                break;
            }
        }

        for(i=0; i<strlen(mensagem); i++){
            if(invalido==0){
                for(x=0;x<strlen(S);x++){
                    if(mensagem[i] == S[x]){
                        if(x+lista[j]<40){
                            letra = S[x+lista[j]];
                        }
                        else if(x+lista[j]>39){
                            letra = S[(x+lista[j])%40];
                        }
             
                        printf("%c",letra);
                        j++;
            
                    }
            
                    if(j==4){
                        j=0;
                    }
                }
            }
        }
    }

    return 0;
}
// 1357
QUE A FORCA ESTEJA COM VOCE.