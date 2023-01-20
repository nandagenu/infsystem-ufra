// Fazer um programa que leia as médias de 10 alunos (em um vetor), calcule e mostre: a) a média geral da turma e; b) a quantidade de alunos que ficaram acima da média. c) quantidade de alunos que ficaram abaixo da média

#include <stdio.h>

int main() {

  float media_aluno[10], soma_media;
  int i, qtd1, qtd2;

  soma_media = 0;

  for(i=0;i<10;i++) {
    printf("Digite a média do aluno %d: ", i+1);
    scanf("%f", &media_aluno[i]);
    soma_media = soma_media + media_aluno[i];
  }

  qtd1 = 0;
  qtd2 = 0;
  
  for(i=0;i<10;i++) {
    if(media_aluno[i] >= 6) {
      qtd1 = qtd1 + 1;
    } else {
      qtd2 = qtd2 + 1;
    }
  }
  
  printf("\nMédia geral da turma: %.2f", soma_media/10);
  printf("\nQuantidade de alunos que ficaram acima da média: %d", qtd1);
  printf("\nQuantidade de alunos que ficaram abaixo da média: %d", qtd2);
  
  return 0;
}
