#include <stdio.h>
typedef struct {
   int hora;
   int minuto;
   int segundo;
} Horario;

//Usando também como tipo de retorno da função
Horario despertador(Horario h, int hor,int min,int seg){
    h.hora+=hor;
    h.minuto+=min;
    h.segundo+=seg;
    if(h.hora>=24){
      h.hora= h.hora % 24;
    }
    if(h.minuto>=60){
      h.minuto = h.minuto % 60;
    }
    if(h.segundo>=60){
      h.segundo = h.segundo % 60;
    }
    return h;
}

int main(){
    Horario alarme;
    int hor,min,seg;
  
    scanf("%d:%d:%d", &alarme.hora, &alarme.minuto, &alarme.segundo);
    printf("atual: %d:%d:%d\n", alarme.hora, alarme.minuto, alarme.segundo);
    printf("tempo despertador:");
    scanf("%d:%d:%d",&hor,&min,&seg);
    alarme = despertador(alarme,hor,min,seg);
    printf("Hora para acordar: %.2d:%.2d:%.2d\n", alarme.hora, alarme.minuto, alarme.segundo);

    return 0;
}