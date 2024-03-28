#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Digite um valor para a: ");
    scanf("%f", &a);
    printf("Digite um valor para b: ");
    scanf("%f", &b);
    printf("Digite um valor para c: ");
    scanf("%f", &c);

    float maior=a, menor=a;

    if(b>maior)
    {
        maior=b;
    }
    if(c>maior)
    {
        maior=c;
    }
    if(b<menor)
    {
        menor=b;
    }
    if(c<menor)
    {
        menor=c;
    }
    printf("o maior valor: %f\n", maior);
    printf("o menor valor: %f\n", menor);
       
    return 0;
}