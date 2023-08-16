
#include <stdio.h>
int main() {
  int i,j;
  int linha,coluna;
  int til =0,x=0,acento=0,aste=0,ponto=0;
  scanf("%d %d",&linha,&coluna);
  char matriz[linha][coluna];
  
for (i=0; i<linha; i++)
  for (j=0; j<coluna; j++)
    scanf(" %c", &matriz[i][j]);

for (i=0; i<linha; i++){
  for (j=0; j<coluna; j++){
    switch(matriz[i][j]){
      case '~':til++; break;
      case 'X':x++; break;
      case '^':acento++;break;
      case '*':aste++; break;
      case '.':ponto++; break;
    }
  }
}
if(x>=1){
  printf("Planeta Hostil");
}
else if( (til * 100) / (coluna * linha) >= 50 && (100 * aste) / (linha * coluna) >= 20 && x<1){
  printf("Planeta Classe M");
}
else if((100 * til) / (coluna * linha) >= 85){
  printf("Planeta Aquático");
}
else if((100 * acento) / (coluna * linha) >= 60){
  printf("Planeta Desértico");
}
else if((100 * aste) / (coluna * linha) >= 65){
  printf("Planeta Selvagem");
}
else{
  printf("Planeta Inóspito");
} 
  return 0;
}
// 5 5
~~~~~
~..*~
~~**~
~****
~~**X