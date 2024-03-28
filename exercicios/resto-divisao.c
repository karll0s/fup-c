#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, n;

    printf("Digite um inteiro qualquer: ");
    scanf("%d", &x);

    printf("Quantos digitos quer deixar (do final dele)? ");
    scanf("%d", &n);

    x = x%(int)pow(10,n);

    printf("%d", x);
    return 0;
}