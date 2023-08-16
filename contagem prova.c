#include <stdio.h>
int main() {
int equipes;
char esporte;
int i;
int salto, corrida, lanca, total;
 salto = corrida = lanca = total = 0;
  
scanf("%d", &equipes); 
for(i = 0;i < equipes; i++){ 
  
do{ 
  scanf("%c",&esporte);
  switch(esporte){
    case 'S': salto++; break;
    case 'C': corrida++; break;
    case 'L': lanca++; break;
scanf(" %c", &esporte);
  }  
}while(esporte != 'F');
}
total = corrida + salto + lanca;
printf("%d %d %d %d",corrida , salto ,lanca ,total);
return 0;
}

// entrada: 1
S S S C L L F