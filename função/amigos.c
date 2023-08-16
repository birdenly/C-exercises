#include <stdio.h>
int testar_divisor(int numero, int divisor){
  if(numero%divisor == 0){
    return 1;
  }
  else{
    return 0;
  }
  }
int soma_divisores(int value){
  int soma = 0;
  int i;
  for(i = 1;i < value; i++){
    if (testar_divisor(value, i) == 1){
      soma = soma + i;
    }
  }
  
 return soma; 
}
int testa_amigos(int a, int b){
  if(soma_divisores(a) == b && soma_divisores(b) == a && a != b){
    return 1;
  }
  else {
    return 0;
  }
  
  }
int main() {
int A,B,C,D;
int x,y;
int z = 0;

scanf("%d %d %d %d",&A,&B,&C,&D);
for(int x = A; x <= B; x++)
{
  for(int y = C; y <= D; y++)
  {
  if(testa_amigos(x,y)== 1){
    printf("O %d possui um amigo!\n",x);
    z=1;
  }
}
  
}
if(z==0){
  printf("Os intervalos nao apresentam amigos!"); 
}
return 0 ;   
}
\\ 200 300 200 300