#include <stdio.h>
int main() {
int n,m,i,j,k = 0;
int aux;
int lista1[50],lista2[50],lista3[50];

scanf("%d %d",&n,&m);
  
for (i=0;i<n;i++){
  scanf("%d",&lista1[i]);
}
  

for (i=0;i<m;i++){
  scanf("%d",&lista2[i]);
}

for ( i = 0; i < n; i ++){
  lista3[k] = lista1[i];
  k++;
  }
 for ( j = 0; j < m; j++){
   lista3[k] = lista2[j];
   k++;
   }


for(j=0; j < k - 1; j++){
  for(i = 1; i < k - j; i++){
    if(lista3[i -1] > lista3[i]){
      aux = lista3[i - 1];
      lista3[i - 1] = lista3[i];
      lista3[i] = aux;      
    }
    }
  }
for(i=0;i<k;i++){
  if(lista3[i] != lista3[i+1]){
    printf("%d ",lista3[i]);
}
  else{ 
    for(j=i;j < k;j++){
      if(lista3[j] == lista3[j+1]){
        i++;
      }
    
  }
    
  }

  }
  return 0;   
}