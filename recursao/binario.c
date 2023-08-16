#include <stdio.h>
#include <stdlib.h>
void binario(int n){
    if((n/2) != 0){
      binario(n/2);
    }
    printf("%d", (n%2));
}

int main() {
  int n;

  scanf("%d", &n);
  binario(n);

  return 0;
}