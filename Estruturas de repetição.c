// Faça um algoritmo que receba como entrada as médias de 5 alunos e calcule a média geral desta turma.
// Utilize os 3 exemplos de estruturas de repetição.

// método WHILE
#include <stdio.h>

int main()
{
    float media_aluno, media_geral, i;
    media_geral = 0;
    
    while(i<5) {
        printf("Digite a média do aluno: ");
        scanf("%f", &media_aluno);
        media_geral = media_geral + media_aluno;
        i++;
    }
    
    printf("A média geral desta turma vai ser de %.2f", media_geral/5);
    return 0;
}

//------------------------------------------------------------------------------

// método DO-WHILE
#include <stdio.h>

int main()
{
    float media_aluno, media_geral, i;
    media_geral = 0;
    
    do {
        printf("Digite a média do aluno: ");
        scanf("%f", &media_aluno);
        media_geral = media_geral + media_aluno;
        i++;
    } while(i<5);
    
    printf("A média geral desta turma vai ser de %.2f", media_geral/5);
    return 0;
}

//------------------------------------------------------------------------------

// método FOR
#include <stdio.h>

int main()
{
    float media_aluno, media_geral, i;
    media_geral = 0;
    
    for (i=0; i<5; i++) {
        printf("Digite a média do aluno: ");
        scanf("%f", &media_aluno);
        media_geral = media_geral + media_aluno;
    }
    
    printf("A média geral desta turma vai ser de %.2f", media_geral/5);
    return 0;
}
