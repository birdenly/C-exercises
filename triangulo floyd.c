#include <stdio.h>
int main() {
int total;
int valor = 1;
int i;
int j;
  scanf("%d",&total);
if (total <= 0){
  printf("Você entrou com %d, tente de novo na próxima",total);}
else{

  for(i = 1; i <= total; i++){
  for(j = 1;j <= i; j++){
  printf(" %2d",valor++);
    }
  printf("\n");
    }
  }
  
return 0;
}
// entrada: 10