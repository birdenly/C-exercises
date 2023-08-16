#include "structs.h"

int testaNumero(carta carta1, carta carta2);
int testaV(carta cartaMesa);
int testaC(carta cartaMesa);
int testaA(carta cartaMesa);
int testaD(carta cartaMesa);
int testaR(carta cartaMesa);
int testaVazio(carta cartaMesa);
int testaIgualdade(carta carta1, carta carta2);
void removeCarta(mao *minha, carta card);
int qual(char *texto, char letra);
carta lerCarta(char *texto);
void pegaCarta(mao *minha, char *texto);
void guardaMao(char *temp, mao *minha);
int testaNaipe(carta carta1, carta carta2);
carta escolheNaipe(mao *minha);
void descarta(carta discarte, mao *minha, carta *cartaMesa);
void compraCarta(int qtd, mao *minha);
carta escolheDescarte(mao *minha, carta cartaMesa);
