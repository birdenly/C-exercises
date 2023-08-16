#include <stdio.h>


int ehpar(int n){ 
  if((n%2) == 0){
    return 1;
  }
  else if((n%2) != 0){
    return 0;
  }
  
}
int main() {
  int n;
  scanf("%d",&n);
  if(ehpar(n) == 1){
    printf("true");
  }
  else if(ehpar(n) == 0){
    printf("false");
  }
return 0 ;   
}