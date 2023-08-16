#include <stdio.h>
int dentro(float A1, float A2, float A3, float A4, float B1, float B2, float B3, float B4){
  if((A1 < B1)&& (A2 < B2) && (A3 > B3) && (A4 > B4)){
    printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n",A1,A2,A3,A4,B1,B2,B3,B4);
    return 1;
  }
  if((A1 > B1)&& (A2 > B2) && (A3 < B3) && (A4 < B4)){
    printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n",B1,B2,B3,B4,A1,A2,A3,A4);
    return 1;
  }
  else{
    printf("Nao posso afirmar!\n");
    return 1;
  } 
}


int main(){
  int x = 1;
  int i = 0;
  int j;
  float A1[100],A2[100],A3[100],A4[100];
  scanf("%f %f %f %f",&A1[0],&A2[0],&A3[0],&A4[0]);
  scanf("%f %f %f %f",&A1[1],&A2[1],&A3[1],&A4[1]);
  dentro(A1[0],A2[0],A3[0],A4[0],A1[1],A2[1],A3[1],A4[1]);
  i = 1;
  while (x == 1){
    i++;
    scanf("%f %f %f %f",&A1[1],&A2[1],&A3[1],&A4[1]);
    if((A1[1]==0) && (A2[1] == 0) && (A3[1] == 0) && (A4[1] ==0)){
      x = 0;
    }
    else {
      dentro(A1[0],A2[0],A3[0],A4[0],A1[1],A2[1],A3[1],A4[1]);
      x = 1;
    }
  }
  return 0; 
}
\\ 0 0 1 1 0 0 1 1 0 0 0 0