#include <stdio.h>
#include <math.h>

int main(){

    int vetorA[11];
    int vetorX[10];
    int vetorP[10];
    int i, j , N;

    printf("Digite o valor de N (1 a 10): ");
    scanf("%d", &N);

    printf("Digite os valores do coeficiente (A):\n");
    for(i = 0; i <= N; i++){
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os valores de X: \n");
    for(i = 0; i < 10; i++){
        scanf("%d", &vetorX[i]);
    }

    for(i = 0; i < 10; i++){
        int aux = 0;
        for(j = 0; j <= N; j++){
            aux += vetorA[j] * (int)pow(vetorX[i], N - j);
        }
        vetorP[i] = aux;
    }

    for(i = 0; i < 10; i++){
        printf("P(%d) = %d\n", vetorX[i], vetorP[i]);
    }

    return 0;
}