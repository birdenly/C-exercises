#include <stdio.h>
void votacao(int total, int votos[total], int *Votado1, int *votado2){
  int primeiro =0,segundo=0,aux=0;
 for(int i=0; i<total; i++){
        scanf("%d", &votos[i]);
}

  for (int i=0; i<total; i++){
    for(int j=0; j<total; j++){
      if(votos[i]==votos[j]){
        aux++;
}
}
    if(aux>primeiro){
      segundo = primeiro;
      primeiro = aux;
      aux = 0;
      *votado2 = *Votado1;
      *Votado1 = votos[i];
}
    else if(aux>segundo && aux<primeiro){
      segundo = aux;
      aux = 0;
      *votado2= votos[i];
}
    else{
      aux=0;
}
}
}

int main(){
int total;
int Votado1, votado2;
scanf("%d", &total);
int votos[total];
  
votacao(total, votos, &Votado1, &votado2);
printf("%d %d", Votado1, votado2);
    return 0;
}
// 6
2 3 2 2 1 3