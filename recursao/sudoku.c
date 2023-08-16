#include <stdio.h>
#include <stdlib.h>

void ler(char matriz, int matrix[9][9]){
int i,j;
  for (i=0; i<9; i++){
    for (j=0; j<9; j++){
      scanf(" %c", &matriz);
      if(matriz == '*'){
         matriz='0';
  }

      matrix[i][j] = matriz - '0';
  }
}
}

int checaNumero(int i, int j, int matrix[9][9], int aux){
int n,m;
int lin = (i/3) * 3; 
int col = (j/3) * 3;
  
  for(n = 0; n < 9; n++){
    if(matrix[n][j] == aux){
      return 0;
  }
   if(matrix[i][n] == aux){
      return 0;
}
}
    
  for(m = lin; m < lin+3; m++){
    for(n = col; n < col+3; n++){
      if(matrix[m][n] == aux)
         return 0;
  }
}
    return 1;
}

int Sudoku(int matrix[9][9], int i, int j){
int lin = i, col = j,aux;
 
  if(i == 9){
    return 1;
}
  if(col < 8){
    col++;
}
  else{
    lin++;
    col = 0;
}
  if(matrix[i][j]){
    return Sudoku(matrix, lin, col);
}
  else{
    for(aux = 1; aux <= 9; aux++){
      if(checaNumero(i, j, matrix, aux)){
         matrix[i][j] = aux;
         if(Sudoku(matrix, lin, col)){
             return 1;
}
          matrix[i][j] = 0;
  }
}
}
    return 0; 
}

void printaMatriz(int matrix[9][9]){
int i,j;
  for (i=0; i<9; i++){
    for (j=0; j<9; j++){
      printf("%d", matrix[i][j]);
}
      printf("\n");
 }
}

int main(){
char matriz;
int matrix[9][9];

ler(matriz, matrix);

if (Sudoku(matrix, 0, 0)){
    printaMatriz(matrix);
}
else{
  printf("Não tem solução!");
}
  return 0;
}