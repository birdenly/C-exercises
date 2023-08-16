#include <stdio.h>

int main() {
  char letra;
  float usado;
  float pop;
  float total;
  scanf("%c", &letra);
  scanf("%f", &usado);
  scanf("%f", &pop);
  total = usado * pop;

  printf("A popularidade de %c é %.1f", letra, total);

  return 0;
}
// A 20 10.5