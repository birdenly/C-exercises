int avaliar(char matriz[3][3]){
  int i,j;
for (i=0; i<3; i++){
  if(matriz[0][i] == matriz[1][i] && matriz[0][i] == matriz[2][i] && matriz[0][i] != '.'){
    return 1;
  }
  else if(matriz[i][0] == matriz[i][1]  && matriz[i][0] == matriz[i][2] && matriz[i][1] != '.' ){
    return 1;  
}
}

if(matriz[1][1] == matriz[0][2] && matriz[1][1] == matriz[2][0] && matriz[1][1] != '.'){
  return 1;
}
if(matriz[1][1] == matriz[0][0] && matriz[1][1] == matriz[2][2] && matriz[1][1] != '.'){
  return 1;
}
else{
return 0; 
}
}
#include <stdio.h>
int main() {
  int i,j,k;
  int jogadas;
  int j1,j2;
  char j3;
  char matriz[3][3];

for (i=0; i<3; i++)
 for (j=0; j<3; j++)
  scanf(" %c", &matriz[i][j]);

scanf("%d",&jogadas);
  
for (k=0; k<jogadas; k++){
  scanf("%d %d %c",&j1,&j2,&j3);
  j1 = j1 -1;
  j2 = j2 -1;
  if(matriz[j1][j2] != '.'){
    printf("Jogada inválida!");
  }
  else if(matriz[j1][j2] == '.'){
    if(j3=='X'){
    matriz[j1][j2] = 'X';
      }
    else if(j3=='O'){
       matriz[j1][j2] = 'O';
      
    }
    avaliar(matriz);
    if(avaliar(matriz) == 1){
      printf("Boa jogada, vai vencer!");
      
    }
    else{
    printf("Continua o jogo.");
  }
   matriz[j1][j2] = '.'; 
  }
  printf("\n");
  
}

  



  
  return 0;
}
