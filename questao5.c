#include <stdio.h>

int main(){

    float vetor[100], soma = 0.0;
    int i, j = 9; 

    printf("Digite os valores do vetor: \n");
    for(i = 0; i < 100; i++){
        scanf("%f", &vetor[i]);
        soma += vetor[i];
        if(i == j){
            printf("Soma parcial = %.2f\n", soma);
            j = j + 10;
    }
}

    printf("Soma de todos valores do vetor = %.2f", soma);

    return 0;
}