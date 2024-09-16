#include <stdio.h>

int main(){

    float vetNotas1[20];
    float vetNotas2[20];
    float vetMed[20];
    int i;

    printf("Digite os valores das primeiras notas: \n");
    for(i = 0; i < 20; i++){
        scanf("%f", &vetNotas1[i]);
    }

    printf("Digite os valores para as segundas notas: \n");
    for(i = 0; i < 20; i++){
        scanf("%f", &vetNotas2[i]);
    }

    for (i = 0; i < 20; i++){
        vetMed[i] = ((vetNotas1[i] * 2) + (vetNotas2[i] * 3)) / 5;
    }

    printf("Media dos alunos:\n");
    for(i = 0; i < 20; i++){
        printf("Aluno %d = %.2f\n", i, vetMed[i]);
    }

    return 0;
}