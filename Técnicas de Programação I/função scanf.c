#include <stdio.h>

int main(void) {
    int idade;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("A sua idade é %d anos\n", idade);
    
    return 0;
}

//------------------------------------------------

#include <stdio.h>

float main(void)
{
    float salario;
    float tx;
    
    printf("Qual o valor do seu salário?\n");
    scanf("%f",&salario);
    printf("Qual a taxa de aumento, em porcentagem?\n");
    scanf("%f",&tx);

    salario = salario + (salario*(tx/100));
    
    printf("O novo valor do salário, com reajuste, será de %.0f",salario);
    
    return 0;
}

//------------------------------------------------

#include <stdio.h>

float main(void)
{
    float dinheiro;
    float rendimento;
    
    printf("Qual o valor depositado?\n");
    scanf("%f",&dinheiro);
    
    rendimento = dinheiro;
    dinheiro = dinheiro + (dinheiro * 0.05/100);
    rendimento = dinheiro - dinheiro;
    
    printf("O montante foi de %.2f\n",dinheiro);
    printf("Rendeu ao mês %.2f",rendimento);
    
    return 0;
}
