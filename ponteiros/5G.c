#include <stdio.h>
int calcularAlcance(int num, int vetor[num], int distancia, int usuario, int *minimo, int *maximo){
 for (int i=0; i<num; i++){
  if (vetor[i] <= usuario && vetor[i] >= usuario-distancia){
    *minimo = i;
}
  else if (vetor[i] >= usuario && vetor[i] <= usuario+distancia){
    *maximo = i;
 }
}
    if(*minimo==0 && *maximo==0){
    return 0;
}
    else{
      return 1;
}
}

int main(){
int num, distancia, usuario;
int minimo=0, maximo=0;

scanf("%d %d %d", &num, &distancia, &usuario);

int vetor[num];
for (int i=0; i<num; i++){
    scanf("%d", &vetor[i]);
}

if (calcularAlcance(num,vetor,distancia,usuario,&minimo,&maximo) == 1){
    for (int i=minimo; i<=maximo; i++){
        printf("%d ", vetor[i]);
  }
}
else{
    printf("USUARIO DESCONECTADO");
}

    return 0;
}
// 8(tamanho) 30(ate onde vai) 35(usuario)
-50
-30
-25
0
10
50
60  
70