#include <stdio.h>
#include <string.h>
int main(void){
    char gene[50], patern[50];
    int x = 0, DNA = 0, y = 0;
    int  erro = 1;
    scanf("%s %s", gene, patern);
    for (int k = 0; k < strlen(patern); k++){
        if (patern[k] == 'T'){
            erro = 0;
        }
    }
    while (1){
        if (gene[x + y] == patern[DNA]){
            DNA++;
            x++;
        }
        else{
            for (int j = y; j <= x + y; j++){
                printf("%c ", gene[j]);
            }
            printf("não\n");
            if (gene[x + y] == 'T' && erro){
                y += 1 + DNA;
            }
            else{
                y++;
            }
            DNA = 0;
            x = 0;
        }
        if (strlen(gene) - y < strlen(patern)){
            printf("Não achei o padrão");
            break;
        }
        if (DNA == strlen(patern)){
            for (int i = 0; i < strlen(patern); i++){
                printf("%c ", patern[i]);
            }
            printf("sim\n");
            printf("Achei o padrão no índice %i", y);
            break;
        }
    }
    return 0;
}
// ACACAGTAC
ACAG