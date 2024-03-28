#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diaA, mesA, anoA, diaN, mesN, anoN, idade;

    printf("Digite a data atual: (dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &diaA, &mesA, &anoA);
    printf("Digite a data de nascimento: (dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &diaN, &mesN, &anoN);

    idade = anoA - anoN;

    if( (mesN>mesA) || (mesN==mesA && diaN>diaA) ) //não fez aniversário ainda
    {
        idade = idade-1;
    }

    printf("A idade da pessoa: %d", idade);

    return 0;
}