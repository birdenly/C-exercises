#include <stdio.h>
#include <string.h>

typedef struct stats{
    char nome[100];
    int vitorias;
    int empates;
    int derrotas;
    int gol_f;
    int gol_s;
    int pontos;
    int saldo;
    int partidas;
}estatisticas;

int pontos(int i,int vitorias, int emapates, estatisticas time[i]){
  time[i].pontos = (time[i].vitorias*3) + time[i].empates;
    return time[i].pontos;
}
int main(){
char espaco;
int total;
scanf("%d", &total);
estatisticas time[total], aux;

for(int i=0; i<total; i++){
    scanf(" %[^;]", time[i].nome);
    scanf("%c", &espaco);
    scanf("%d", &time[i].vitorias);
    scanf("%c", &espaco);
    scanf("%d", &time[i].empates);
    scanf("%c", &espaco);
    scanf("%d", &time[i].derrotas);
    scanf("%c", &espaco);
    scanf("%d", &time[i].gol_f);
    scanf("%c", &espaco);
    scanf("%d", &time[i].gol_s);
    pontos(i,time[i].vitorias,time[i].empates,time);
    time[i].saldo = time[i].gol_f - time[i].gol_s;
    time[i].partidas = time[i].vitorias + time[i].empates + time[i].derrotas;
}

for (int i=0; i<total-1; i++){
    for (int j=1; j<total-i; j++){
        if (time[j].pontos > time[j-1].pontos || time[j].pontos == time[j-1].pontos && time[j].vitorias >time[j-1].vitorias || time[j].pontos == time[j-1].pontos && time[j].vitorias == time[j-1].vitorias && time[j].saldo > time[j-1].saldo){
            aux = time[j];
            time[j] = time[j-1];
            time[j-1] = aux;
}
}
}
printf("Tabela do campeonato:\nNome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");

for(int i=0; i<total; i++){
    printf("%s", time[i].nome);
    printf("| %d| %d| %d| %d| %d| %d| %d| %d\n", time[i].pontos, time[i].partidas, time[i].vitorias, time[i].empates, time[i].derrotas, time[i].gol_f, time[i].gol_s, time[i].saldo);
}
printf("\nTimes na zona da libertadores:\n");
for(int i=0; i<6; i++){
    printf("%s\n", time[i].nome);
}
printf("\nTimes rebaixados:\n");
for(int i=total-1; i>=16; i--){
    printf("%s\n", time[i].nome);
}

    return 0;
}
// 20
athletico paranaense; 17 8 10 49 31
atletico mineiro; 11 9 15 40 46
avai; 3 9 23 16 55
bahia; 11 12 12 40 39
botafogo; 13 3 19 30 41
ceara; 10 7 18 34 38
chapecoense; 6 10 19 27 49
corinthias; 13 14 8 39 30
cruzeiro; 7 15 13 27 41
csa; 8 8 19 22 51
flamengo; 26 6 3 77 31
fluminense; 11 8 16 35 44
fortaleza; 13 7 15 46 47
goias; 14 7 14 41 55
gremio; 17 8 10 57 36
internacional; 14 9 12 40 36
palmeiras; 19 11 5 53 28
santos; 20 8 7 54 32
sao paulo; 15 12 8 35 25
vasco da gama; 11 11 13 36 43