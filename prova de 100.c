#include <stdio.h>
int main() {
float max;
float tempo;
int total = 0;
int series = 0;
  scanf("%f", &max);
  scanf("%f", &tempo);

while(tempo > 0){
  if(max >= tempo){
    total +=  1;
  }
  scanf("%f", &tempo);
   
}

if(total <= 8){
  series = 1;
 }
if(total == 0){
  series = 0;
 }
if(total > 8 && total <= 16 ){
  series = 2;
}
if(total > 16 && total <= 24 ){
  series = 3;
}
  
printf("%d %d", total, series );

return 0;
}

//entrada: 12.00
11.00
10.50
11.20
-1