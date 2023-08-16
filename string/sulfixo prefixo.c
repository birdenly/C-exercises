#include <stdio.h>
#include <string.h>

int main() {
    int pre,sul,i,j,k,a,check,cont=1;
    char texto[101];

    scanf("%d\n",&pre);

    char prefixo[pre][11];
    
    for (int i = 0; i < pre; i++)
        scanf("%s", prefixo[i]);

    scanf("%d\n",&sul);
        
    char sulfixo[sul][11]; 

    for (int i = 0; i < sul; i++)
        scanf("%s", sulfixo[i]);

    while(1){
        check = 1;
        
        scanf("%s",texto);
        
        if(strlen(texto)==2){
            break;
        }

        for(i=0;i<pre;i++){
            k=0;
            
            for(j=0;j<strlen(prefixo[i]);j++){
                if(prefixo[i][j] == texto[j]){
                    k++;
                }
            }

            if(k==strlen(prefixo[i])){
                for(int z=0;z<sul;z++){
                    int w=0;

                    for(int g=0;g<strlen(sulfixo[z]);g++){
                        if(sulfixo[z][g] == texto[(strlen(texto)) - (strlen(sulfixo[z]) - g)]){
                            w++;
                        }
                    }

                    if(w==strlen(sulfixo[z])){
                        check=0;  
                    }
                }

                if (check == 1) {
                    check=0;

                    for(a=k;a<strlen(texto);a++){
                        printf("%c",texto[a]);
                    }
                }
            }
        }

        for(i=0;i<sul;i++){
            k=0;

            for(j=0;j<strlen(sulfixo[i]);j++){
                if(sulfixo[i][j] == texto[(strlen(texto)) - (strlen(sulfixo[i]) - j)]){
                    k++;
                }
            }

            if(k==strlen(sulfixo[i])){
                for(int z=0;z<pre;z++){
                    int w=0;

                    for(int g=0;g<strlen(prefixo[z]);g++){
                        if(prefixo[z][g] == texto[g]){
                            w++;
                        }
                    }

                    if(w==strlen(prefixo[z])){
                        check=0;  
                    }
                }

                if (check == 1) {
                    check=0;

                    for(a=0;a<strlen(texto) - k;a++){
                        printf("%c",texto[a]);
                    }
                }
            }

        }

        if(check==1){
            printf("%s",texto);
        }
        
        printf("\n");
    }

    return 0;
}
// 2
contra
anti
1
ote
exemplo
simples
contendo
prefixos
contradizer
antivirus
sufixos
velhote
-1