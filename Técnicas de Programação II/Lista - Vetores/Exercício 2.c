// Crie um vetor de 10 posições do tipo inteiro e faça um programa que permita o preenchimento de todo o vetor com os valores digitados pelo usuário, e faça também a soma de todos os seus valores e mostre o resultado.

#include <stdio.h>

int main() {
  
  int idade[10], soma_idade, i;

  printf("Vamos ler a idade de 10 alunos em uma sala.\n");

  soma_idade = 0;
  
  for(i=0;i<10;i++) {
    printf("Digite a idade do aluno %d: ", i+1);
    scanf("%d", &idade[i]);
    soma_idade = soma_idade + idade[i];
  }

  printf("A soma de todas as idades será %d", soma_idade);
  
  return 0;
}
