#include <stdio.h>
#include <stdlib.h>

    /**
    fazer um programa que receba dois valores e faça uma operação
    à escolha do usuário entre + , - , * ou /
    **/

int main()
{
    float a, b, r;
    int op;

    printf("Digite dois valores: ");
    scanf(" %f %f", &a, &b);

    printf("\t\tMenu\n");
    printf("1 - somar\n");
    printf("2 - subtrair\n");
    printf("3 - multiplicar\n");
    printf("4 - dividir\n");
    printf("\nQual sua escolha? ");

    scanf(" %d", &op);

    switch(op)
    {
        case 1:
        {
            r = a+b;
            break;
        }
        case 2:
        {
            r = a-b;
            break;
        }
        case 3:
        {
            r = a*b;
            break;
        }
        case 4:
        {
            if(b!=0)
            {
                r = a/b;
            }
            else
            {
                printf("Erro 1");
                return 1;
            }
            break;
        }
        default:
        {
            printf("Erro 2");
            return 2;
        }

    }

    printf("Resultado: %f\n", r);

    return 0;
}