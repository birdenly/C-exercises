#include <stdio.h>
#include <stdlib.h>
void ordena(int *vetor, int tam){
    for (int i = 0; i < tam; i++){
        for (int j = i; j < tam; j++){
            if (vetor[i] > vetor[j]){
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
 }
}
}

int* ler_vet(int *tam){
  char entrada;
  int *res = NULL;

  while(scanf(" %c", &entrada) != EOF){
    ungetc(entrada, stdin);
    res = realloc(res, sizeof(int) * (*tam+1));
    scanf("%d", &res[*tam]);
    (*tam)++;
} 
  return res;
}
int main() {
  int *vetor;
  int tam=0;

  vetor = ler_vet(&tam);
  
  ordena(vetor, tam);
  
  for (int i=0; i<tam; i++)
    printf("%d ", vetor[i]);
  
  return 0;
}
