#include <stdio.h>

int main() {
  int ano = 0;
  int mes = 0;
  int dia;
  scanf("%d",&dia);
  if ( dia <= 365 ){
    ano = dia / 365;
    mes = (dia % 365) / 30;
    dia = ((dia % 365) % 30) % 30;
  }
    if ( dia >= 365 ){
    ano = dia / 365;
    mes = (dia % 365) / 30;
    dia = ((dia % 365) % 30) % 30;
  }
  if ( mes >= 12){
    mes = mes % 12;
  }
  
  printf("%d ano(s)", ano);
  printf("\n%d mes(es)", mes);
  printf("\n%d dia(s)", dia);

  return 0;
}
// 15