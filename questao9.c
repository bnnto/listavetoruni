#include <stdio.h>

int main(){

    float vetor[10];
    int i;

    printf("Digite os valores do vetor: \n");
    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    int maiorVal = vetor[0];
    for(int i = 1; i < 10; i++){
        if(vetor[i] > maiorVal){
            maiorVal = vetor[i];
        }
}

    int menorVal = vetor[0];
    for(int i = 1; i < 10; i++){
        if(vetor[i] < menorVal){
            menorVal = vetor[i];
        }
}

    printf("Maior valor: %d\n", maiorVal);
    printf("Menor valor: %d", menorVal);

    return 0;
}