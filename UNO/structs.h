#include <stdio.h>

typedef struct{
  char numero[3];
  char naipe[4];
} carta;

typedef struct{
  carta *cartas;// varia
  int count;
} mao;