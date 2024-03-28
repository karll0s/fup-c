#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int x = rand()%10, r;
    printf("Tente adivinhar o valor que sorteei de 0 a 9: ");
    scanf("%d", &r);

    if(x==r)
    {
        printf("Acertou miseravi!");
    }
    else
    {
        printf("Errou. O valor sorteado foi %d", x);
    }
    
    return 0;
}