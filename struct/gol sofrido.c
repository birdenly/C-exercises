#include <stdio.h>
#include <string.h>

typedef struct stats{
    char nome[100];
    int gol_m;
    int gol_s;
}times_f;

void gols(int total,times_f time[], times_f aux){
for (int i=0; i<total-1; i++){
    for (int j=1; j<total-i; j++){
        if (time[j].gol_m > time[j-1].gol_m ){
            aux = time[j];
            time[j] = time[j-1];
            time[j-1] = aux;

}
}
  }
}
      
int main(){
char espaco;
int total;
int k =1;
scanf("%d", &total);
times_f time[total], aux;
for(int i=0; i<total; i++){
    scanf(" %[^\n]", time[i].nome);
    scanf("%d", &time[i].gol_m);;
    scanf("%d", &time[i].gol_s);  
}
gols(total,time,aux);
for(int j=0;j<total;j++){
 printf("%d - %s\n",k,time[j].nome);
   k++;
  printf("Gols marcados: %d\n",time[j].gol_m);
  printf("Gols sofridos: %d\n",time[j].gol_s);
}



  return 0;
}
//3
Campinense 
23
12
ABC
30
13
America
25
20                   