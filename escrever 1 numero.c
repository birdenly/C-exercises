#include <stdio.h>
int main() {
  int numero;
  int numero1;
  int reverso = 0;
  int resto;
  scanf("%d", &numero);
  
   while ( numero != 0) {
    resto = numero % 10;
    reverso = reverso * 10 + resto;
    numero /= 10;
  }

  
  while(reverso){
     numero1 = reverso % 10;
    printf("%d\n",numero1);
    reverso = reverso / 10;
  }
  return 0;
}
//entrada: 12349