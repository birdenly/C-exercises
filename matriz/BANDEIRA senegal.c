#include <stdio.h>
int calcular_aposta(int largura,int altura, int bandeira[altura][largura],int inicial){
    int i, j;
    for (i=0; i<largura; i++){
        for (j=0; j<altura; j++){
            if (i<largura/3){
                bandeira[j][i]=inicial+1;
              }
            
            else if (i>=largura/3 && i<(largura/3)*2){
                bandeira[j][i]=inicial+2;
              }
            
            else if(i>=(largura/3)*2){
                bandeira[j][i]=inicial+3;
              }
            }

        }
    }


int main() {
  int largura;
  int altura;
  int inicial;
  int totalG = 0,totalY = 0,totalR = 0;
  int i,j;
  char cor;
  scanf("%d %d %c",&largura, &inicial, &cor);
  altura =largura - (largura/3);
  int bandeira[altura][largura];
  calcular_aposta(largura,altura,bandeira,inicial);  

  
for (i=0; i<altura; i++){
   for (j=0; j<largura; j++){
     if(bandeira[i][j] == inicial+1){
       totalG= totalG + inicial+1;
     }
     if(bandeira[i][j] == inicial+2){
       totalY= totalY + inicial+2;
     }
     if(bandeira[i][j] == inicial+3){
       totalR= totalR + inicial+3;
     }
     }
  }
switch(cor){
  case 'G': printf("%d",totalG); break;
  case 'Y': printf("%d",totalY); break;
  case 'R': printf("%d",totalR); break;
  
  
}
  
return 0;  
  }
// 6 2 Y, 9 3 G, 12 0 R