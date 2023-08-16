#include <stdio.h>
int main() {
int T;
int lista[T];
int i, chato = 0;

scanf("%d",&T);
for (i=0;i<T;i++){
  scanf(" %d",&lista[i]);
}
for(i=0;i<T;i++){
  if(i > 0 && (((lista[i] - lista[i - 1]) % 2) != 0)){
    chato = 1;
    break;
    
  }
}
if(chato > 0){
  printf("Chato");
}
else{
  printf("Legal");
}
return 0 ;   

}