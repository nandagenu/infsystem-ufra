// Conjunto homogêneo de dados (armazena apenas um tipo - int, float, str)
// Digite a média de 10 alunos, diga a média do aluno 5 e diga a média geral.

#include <stdio.h>

int main() {
  
  float media_aluno[10], soma_media;
  int i;

  soma_media = 0;
    
  for (i=0;i<10;i++) {
    printf("Digite a média do aluno %d: ", i+1);
    scanf("%f", &media_aluno[i]);
    soma_media = soma_media + media_aluno[i];
  }

  printf("\nA média do aluno 5 foi de %.2f\n", media_aluno[4]);
  printf("A média geral da turma foi de %.2f", soma_media/10);
  
  return 0;
}
