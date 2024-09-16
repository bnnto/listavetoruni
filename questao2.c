#include <stdio.h>

int main(){

    int vetorA[10];
    int vetorB[10];
    int i, j;

    for(i = 0; i < 10; i++){
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < 10; i++){
        vetorB[i] = vetorA[i];
    }

    for(j = 0; j < 10; j++){
        if(vetorB[j] % 2 == 0){
            vetorB[j] = vetorB[j] / 2;
        }else{
            vetorB[j] = vetorB[j] * 3;
        }
    }

    printf("Vetor A:\n");
    for(i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, vetorA[i]);
    }

    printf("\n");
    printf("Vetor B:\n");
    for(i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, vetorB[i]);
    }

    return 0;
}