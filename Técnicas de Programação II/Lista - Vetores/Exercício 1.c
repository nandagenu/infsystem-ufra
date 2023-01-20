// Crie um vetor de 10 posições do tipo inteiro e faça um programa que permita o preenchimento de todo o vetor com os valores digitados pelo usuário. Após a leitura, mostre os valores lidos.

#include <stdio.h>

int main() {

  int idade[10], i;

  printf("Vamos ler a idade de 10 alunos em uma sala.\n");
  
  for(i=0;i<10;i++) {
    printf("Digite a idade do aluno %d: ", i+1);
    scanf("%d", &idade[i]);
  }
  
  for(i=0;i<10;i++) {
    printf("A idade do aluno %d é %d.\n", i+1, idade[i]);
  }
  
  return 0;
}
