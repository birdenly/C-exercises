#include <stdio.h>
#include <stdlib.h>
typedef struct {
  int nlin, ncol;
  int **mat;
} Matrix;

Matrix* createMatrix(int nlin, int ncol){
  int i;
  Matrix *matriz = malloc(sizeof(Matrix));
  matriz->nlin = nlin;
  matriz->ncol = ncol;
  matriz->mat = malloc(sizeof(Matrix*) * nlin);
  for(i=0; i<nlin; i++){
    matriz->mat[i] = malloc(sizeof(Matrix) * ncol);
}
  return matriz;
}

void readMatrix(Matrix *m){
 int i,j;
 for(i=0; i<m->nlin; i++){
  for(j=0; j<m->ncol; j++){
     scanf("%d", &m->mat[i][j]);
  }
}        
}

void printMatrix(Matrix *m){
  int i,j;
  for(i=0; i<m->nlin; i++){
    for(j=0; j<m->ncol; j++){
      printf("%d ", m->mat[i][j]);
        }
   printf("\n");
}
}

void destroyMatrix(Matrix **m){
    int *aux = *m;
    free(aux);
    *m = NULL;
}

int main(){
  int lin, col;
  Matrix* mat;

  scanf("%i %i", &lin, &col);
  mat = createMatrix(lin, col);
  readMatrix(mat);
  printMatrix(mat);
  destroyMatrix(&mat);
  if (mat ==NULL) {
    printf("OK\n");
} 
  return 0;
}
// 3 4
1 2 3 4
5 6 7 8
9 0 1 2