#include <stdio.h>

int main(){

    float vetor[100], soma = 0.0;
    int i; 

    printf("Digite os valores do vetor: \n");
    for(i = 0; i < 100; i++){
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < 100; i++){
        soma += vetor[i];
    }

    printf("Soma de todos valores do vetor = %f", soma);

    return 0;
}