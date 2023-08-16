#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
 int indice_participante;
 int i,j;
 int cont = 0;
 int n=0, num;
 char *nome;
 int *temp;
 char **pessoa;
 char fim[10] = "acabou\n";
 pessoa = malloc(sizeof(char*) * (n+1));
  for (i=0; i<n+1; i++){
   pessoa[i] = malloc(sizeof(char) * 20);
}
  while(1){
  nome = malloc(sizeof(char) * 20);
  fgets(nome, 19, stdin);
        
  if (strcmp(nome, fim) == 0){
     break;
}
  pessoa = realloc(pessoa, sizeof(char*) * (n+1));
  n++;
  pessoa[n-1] = malloc(sizeof(char*) * 20);
  strcpy(pessoa[n-1], nome);
  free(nome);  
}
  
   scanf("%d", &num);
   temp = malloc(sizeof(int) * n);
    
  
  for (i=0; i<n; i++){
      srand(i);
      temp[i] = 40 + rand()%90;
}
    
  srand(num);
    
  for (i=0; i<n; i++){
    indice_participante = rand()%n;
    
    for (j=0; j<n; j++){
      if (temp[j] == indice_participante){
        cont++;
 }
}
      if (cont>0){
        cont--;
          i--;
}
    else{
      printf("%s", pessoa[indice_participante]);
      temp[i] = indice_participante;
  }
}
    return 0;
}