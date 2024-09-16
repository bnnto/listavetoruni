#include <stdio.h>

int main(){

    float vetNotas1[20];
    float vetNotas2[20];
    float vetMed[20];
    float medTurma = 0;
    int i, j = 0;

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

    printf("\nMedia dos alunos:\n");
    for(i = 0; i < 20; i++){
        printf("Aluno %d = %.2f\n", i + 1, vetMed[i]);
    }

    for (i = 0; i < 20; i++){
        medTurma += vetMed[i];
    }

    medTurma = medTurma / 20;
    printf("\nMedia da turma = %.2f\n", medTurma);

    for (i = 0; i < 20; i++){
        if(vetMed[i] < medTurma){
            j++;
        }
    }

    printf("\n%d alunos tiveram media abaixo da media da turma.", j);

    return 0;
}