#include <stdio.h>
int main() {
  float temp;
  char tipo;
  float K1;
  float C1;
  float F1;
  scanf("%f %c", &temp, &tipo);

  if(tipo == 'C'){
    K1 = temp + 273.15;
    C1 = temp;
    F1 = temp * 1.8 + 32;
printf("Celsius: %.2f\n", C1);
printf("Farenheit: %.2f\n", F1);
printf("Kelvin: %.2f\n", K1);
  }
  if(tipo == 'F'){
    K1 = (temp + 459.67) * 5 / 9;
    C1 = (temp - 32) * 5 / 9 ;
    F1 = temp;
printf("Celsius: %.2f\n", C1);
printf("Farenheit: %.2f\n", F1);
printf("Kelvin: %.2f\n", K1);
  }
  if(tipo == 'K'){
    K1 = temp;
    C1 = temp - 273.15;
    F1 = (temp - 273,15) * 9/5 + 32 - 518.67;
printf("Celsius: %.2f\n", C1);
printf("Farenheit: %.2f\n", F1);
printf("Kelvin: %.2f\n", K1);
  }
  return 0;
}
// 40 C