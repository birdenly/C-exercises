#include <stdio.h>
int main() {
  int l;
  char letra;
  scanf("%d %c", &l, &letra);
  int linha,coluna, max = l - 1;
  for(linha = 0; linha < max;linha++){
    for(coluna = 0; coluna < max; coluna++){
      if ( (coluna == linha) || ((linha + coluna) == (max-1)))
       printf("%c", letra);
      else
        printf(" ");
      } 
      printf("\n");
    }
return 0;
}

/ entrada: 5 e