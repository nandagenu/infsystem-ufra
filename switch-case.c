// método SWITCH CASE
// modo mais simples e limpo de usar o método IF-ELSE
// substitui-se o IF por SWITCH, o IF ELSE por CASE e o ELSE por DEFAULT conforme a estrutura a seguir:

#include <stdio.h>

int main()
{
    int op;
    
    printf("Digite uma opção entre 1 e 3: ");
    scanf("%d", &op);
    
    switch(op)
    {
        case 1:
        printf("R$10,00");
        break;
        
        case 2:
        printf("R$20,00");
        break;
        
        case 3:
        printf("R$30,00");
        break;
        
        default:
        printf("Opção inválida, tente novamente.");
        break;
    }

    return 0;
}
