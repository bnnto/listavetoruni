#include <stdio.h>

int main(){

    int vetorA[5];
    int vetorB[5];
    int vetorC[5];
    int i;

    printf("Digite os valores do vetor A: \n");
    for(i = 0; i < 5; i++){
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os valores do vetor B: \n");
    for(i = 0; i < 5; i++){
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 5; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    printf("Vetor C:\n");
    for(i = 0; i < 5; i++){
        printf("N[%d] = %d\n", i, vetorC[i]);
    }

    return 0;
}