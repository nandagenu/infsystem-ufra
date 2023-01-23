// Faça um programa para ler 2 notas (NAP1 e NAP2) de 50 alunos. A média deve ser calculada e exibida a partir das 2 notas do aluno, sendo que a média para aprovação deve ser superior ou igual a 6. No final do processamento, informe a quantidade e o percentual de alunos que ficaram acima ou igual à média considerada para a aprovação (média superior ou igual a 6) e a quantidade e o percentual de alunos que ficaram com nota abaixo da média de aprovação (média abaixo de 6)

#include <stdio.h>

int main() {
  
  float nap1[50], nap2[50], media[50];
  int i, qtd1, qtd2;

  qtd1 = 0;
  qtd2 = 0;

  for(i=0;i<50;i++) {
    printf("Digite a nota NAP1 do aluno %d: ", i+1);
    scanf("%f", &nap1[i]);
    printf("Digite a nota NAP2 do aluno %d: ", i+1);
    scanf("%f", &nap2[i]);

    media[i] = (nap1[i] + nap2[i])/2;
    if(media[i] >= 6) {
      printf("A média do aluno %d foi de %.2f. Aprovado!\n\n", i+1, media[i]);
      qtd1 = qtd1 + 1;
    } else {
      printf("A média do aluno %d foi de %.2f. Reprovado!\n\n", i+1, media[i]);
      qtd2 = qtd2 + 1;
    }
  }

  printf("A quantidade de alunos APROVADOS foi de %d alunos, ou seja, %d%% do total.\n", qtd1, qtd1*100/50);
  printf("A quantidade de alunos REPROVADOS foi de %d alunos, ou seja, %d%% do total.", qtd2, qtd2*100/50);
  
  return 0;
}
