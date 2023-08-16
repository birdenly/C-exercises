#include <stdio.h>
int perfeito(int n){
int i;
int soma = 0; 
   
 scanf("%d", &n); 
 
 for(i = 1 ; i < n ; i++){
   if(n % i == 0){
     soma = soma + i;
     }
  }    

 if (soma == n){
    return 1;
   }
 else{  
    return 0;
   }
}
int main() {

int vezes, n, j;
scanf("%d", &vezes);

  for (j = 1; j < vezes; j++){
    scanf("%d", &n);
    if(perfeito(n) == 1){
      printf("%d eh perfeito\n", n);
    }
    else if(perfeito(n) == 0){
      printf("%d nao eh perfeito\n", n);
    }
    
    }
return 0 ;   
}