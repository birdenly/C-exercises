#include <stdio.h>
int main() {
int n,i;
char traco;
int apro = 0,recu = 0,repro = 0;
float nota[n],notaAP[n],notaREPRO[n],notaRECU[n];
int aluno[n],alunoAP[n],alunoREPRO[n],alunoRECU[n];


 scanf("%d", &n);
  
for (i=0;i<n;i++){
  scanf("%d %c %f",&aluno[i],&traco,&nota[i]);
}
  
for (i=0;i<n;i++){
  if(nota[i] > 7.0){
    notaAP[apro] = nota[i];
    alunoAP[apro] = aluno[i];
     apro++;
  } 
  }
  
for (i=0;i<n;i++){
  if(nota[i] >= 5.0 && nota[i] < 7){
   notaRECU[recu] = nota[i];
   alunoRECU[recu] = aluno[i];
    recu++;
  } 
  }


for (i=0;i<n;i++){
  if(nota[i] < 5.0){
    notaREPRO[repro] = nota[i];
    alunoREPRO[repro] = aluno[i];
    repro++;
  } 
  }

printf("Aprovados:");
  for(i=0;i<apro;i++){
    printf(" %d (%.1f)",alunoAP[i],notaAP[i]);
    if(i != apro - 1){
      printf(",");
    }
}
  
printf("\n");
printf("Recuperação:");
  for(i=0;i<recu;i++){
    printf(" %d (%.1f)",alunoRECU[i],notaRECU[i]);
    if(i != recu - 1){
      printf(",");
}
 }
  
printf("\n");
printf("Reprovados:");
  for(i=0;i<repro;i++){
    printf(" %d (%.1f)",alunoREPRO[i],notaREPRO[i]);
    if(i != repro - 1){
      printf(",");
}
 }
  return 0;   
}