#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inverter(char *copia, int tam, int aux){
  if (tam <= aux){
    return 1;
}
  else{
    if (copia[tam-1] != copia[aux]){
      return 0; 
} 
      return inverter(copia, tam-1, aux+1);
}
}

int palindromo(char *entrada, int tam){
int aux = 0;
char *copia = malloc(sizeof(int) * tam);
strcpy(copia, entrada);
tam = tiraEspaco(copia);
    
  if (inverter(copia, tam, aux)){
    return 1;
}
  else{
   return 0;
}
}

int tiraEspaco(char *copia){
int aux=0,i;
  for(i=0; copia[i]; i++){
    if(copia[i] != ' '){
      copia[aux++] = copia[i];
}
}
  copia[aux] = 0;
    
  return aux;
}

int main(){
char *entrada = malloc(sizeof(int) * 20);
    
scanf(" %[^\n]", entrada);

int tam = strlen(entrada);

entrada = realloc(entrada, sizeof(int) * tam);

if (palindromo(entrada, tam)){
    printf("O texto \"%s\" é palíndromo", entrada);
}
else{
    printf("O texto \"%s\" não é palíndromo", entrada);
}
    
  return 0;
}