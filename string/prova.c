#include <stdio.h>
#include <string.h>

int main() {
  char palavra[20];
  char texto[50];
  char resposta[100][100];
  char aux[100];
  int i=0,j=0,k,total;
  char* igual;
  scanf("%s", palavra);
  while(scanf(" %s",texto) != EOF){
    igual=strstr(texto,palavra);
    if (igual){
      k++;
    strcpy(resposta[j],texto);
    j++;
}
}
    for(i=0;i<k;i++){
      for(j=i+1;j<k;j++){
         if(strcmp(resposta[i],resposta[j])>0){
            strcpy(aux,resposta[i]);
            strcpy(resposta[i],resposta[j]);
            strcpy(resposta[j],aux);
         }
      }
   }

for (int i = 0; i < k; i++) {
    printf("%s\n",resposta[i]);
  }
  


    return 0;
}
