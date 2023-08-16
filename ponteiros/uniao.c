#include <stdio.h>

int uniao(int n, int m, int* A, int* B, int* C){
    int tam=0, j=0;
    
    for (int i=0; i<n; i++){
        C[tam++] = A[i];
    }
    
    for (int i=0; i<m; i++){
        for (j=0; j<n; j++){
            if(B[i] == A[j]){   
                break;
            }
        }
            if(j==n){
                C[tam++] = B[i];
            }
    }
    return tam;
}

int main(){

int n,m, num, num2, tam;
scanf("%d %d", &n, &m);

int A[n], B[m], C[50];

for (int i=0; i<n; i++){
    scanf("%d", &num);
    A[i] = num;
}

for (int i=0; i<m; i++){
    scanf("%d", &num2);
    B[i] = num2;
}

tam = uniao(n, m, A, B, C);

for (int i=0; i<tam; i++){
    printf("%d ", C[i]);
}

    return 0;
}
// 6 1 2 3 4 5 6
5 2 3 4 5 6




