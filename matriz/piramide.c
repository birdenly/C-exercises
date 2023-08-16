#include <stdio.h>
int main() {
  int i,j,loop =0,k;
  int total;
  int num =1;
  scanf("%d",&total);
  int matriz[total][total];
  k = total -1;

while(k> 0){
  
  for (i=loop; i<total-loop; i++){
        for (j=loop; j<total-loop; j++){
           matriz[i][j] = num;  
        
          }
    
    } 
loop++;
k--;
num++;
  }
  for (i=0; i<total; i++){
        for (j=0; j<total; j++){
          printf("%d ",matriz[i][j]);
          }
    printf("\n");
    }
   
  

  return 0;

}
// 3