#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int x = rand(), r;
    printf("Par ou Impar? (0 para escolher par ou 1 para escolher impar)\n");
    scanf("%d", &r);

    if(r==x%2)
    {
        printf("Ganhou! Sorteei %d", x);
    }
    else
    {
        printf("Perdeu! Sorteei %d", x);
    }
    
    return 0;
}