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

    if(a>b) //caso o a seja maior que o b
    {
        if(a>c)
        {
            printf("maior: %f\n", a);
            if (b<c)
            {
                printf("menor: %f\n", b);
            }
            else
            {
                printf("menor: %f\n", c);
            }
        }
        else
        {
            printf("maior: %f\n", c);
            printf("menor: %f\n", b);
        }
    }
    else //caso o b seja maior que o a
    {
        if (b>c)
        {
            printf("maior: %f\n", b);
            if (a<c)
            {
                printf("menor: %f\n", a);
            }
            else
            {
                printf("menor: %f\n", c);
            }
        }
        else
        {
            printf("maior: %f\n", c);
            printf("menor: %f\n", a);
        }
    }

    return 0;
}