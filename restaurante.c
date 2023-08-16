#include <stdio.h>
int main() {
 int combo;
 int dinheiro;
 int quantia;

  scanf("%d %d", &combo, &dinheiro);

   if(combo == 1){
    if(dinheiro == 12){
      printf("Deu certim!");
    }
    if (dinheiro < 12){
  quantia = 12 - dinheiro;
    printf("Saldo insuficiente! Falta %d reais", quantia);
    }
    if (dinheiro > 12){
  quantia = dinheiro - 12;
    printf("Troco = %d reais", quantia);
    }
   }

  if(combo == 2){
    if(dinheiro == 23){
      printf("Deu certim!");
    }
    if (dinheiro < 23){
  quantia = 23 - dinheiro;
    printf("Saldo insuficiente! Falta %d reais", quantia);
    }
    if (dinheiro > 23){
  quantia = dinheiro - 23;
    printf("Troco = %d reais", quantia);
    }
   }


  if(combo == 3){
    if(dinheiro == 31){
      printf("Deu certim!");
    }
    if (dinheiro < 31){
  quantia = 31 - dinheiro;
    printf("Saldo insuficiente! Falta %d reais", quantia);
    }
    if (dinheiro > 31){
  quantia = dinheiro - 31;
    printf("Troco = %d reais", quantia);
    }
   }

  if(combo == 4){
    if(dinheiro == 28){
      printf("Deu certim!");
    }
    if (dinheiro < 28){
  quantia = 28 - dinheiro;
    printf("Saldo insuficiente! Falta %d reais", quantia);
    }
    if (dinheiro > 28){
  quantia = dinheiro - 28;
    printf("Troco = %d reais", quantia);
    }
   }

  if(combo == 5){
    if(dinheiro == 15){
      printf("Deu certim!");
    }
    if (dinheiro < 15){
  quantia = 15 - dinheiro;
    printf("Saldo insuficiente! Falta %d reais", quantia);
    }
    if (dinheiro > 15){
  quantia = dinheiro - 15;
    printf("Troco = %d reais", quantia);
    }
   }


  
return 0;
}
// 4 23