#include <stdio.h>
typedef struct{
    char modelo[40];
    int memoria;
    float processador;
    float camera;
    float bateria;
}smartphone;

void cadastraSmartphone(int cadas, smartphone cell[]){
    scanf(" %[^\n]s", cell[cadas].modelo);
    scanf("%d %f %f %f", &cell[cadas].memoria, &cell[cadas].processador, &cell[cadas].camera, &cell[cadas].bateria);
}

smartphone O_minimo(){
    smartphone min;
    scanf("%d %f %f %f", &min.memoria, &min.processador, &min.camera, &min.bateria);
    return min;
}

int pesquisaSmartphone(int cadas, smartphone cell[], smartphone min){
    int encontrados=0;
    for(int i=0; i<cadas; i++){
        if(cell[i].memoria >= min.memoria && cell[i].processador >= min.processador && cell[i].camera >= min.camera && cell[i].bateria >= min.bateria){
            printf("Modelo: %s\n", cell[i].modelo);
            printf("Memoria: %dGB\n", cell[i].memoria);
            printf("Processador: %.2fGhz\n", cell[i].processador);
            printf("Camera: %.2fMPixels\n", cell[i].camera);
            printf("Bateria: %.2fmA\n\n", cell[i].bateria);
            encontrados++;
}
}
    printf("%d smartphones encontrados.", encontrados);
}

int main(){
int total_cadastrado = 0;
char comando;
smartphone cell[20], minimo;

while(comando != 'n'){
    scanf(" %c", &comando);
    if(comando == 's'){
    cadastraSmartphone(total_cadastrado, cell);
    total_cadastrado++;
}
    else{
        minimo = O_minimo();
}
}
pesquisaSmartphone(total_cadastrado, cell, minimo)

    return 0;
}
// s
Galaxy A51
4
2
48
4000
s
Galaxy S20 Ultra
12
2.44
108
5000
s
Redmi 9
3
1.9
13
5020
s
Asus Zenfone Shot Plus
4
1.8
12
4000
n
4
2
48
4500