#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;
    scanf("%f", &n1);
    scanf("%f", &n2);

    media = (n1+n2)/2;

    printf("media de %f e %f = %f", n1, n2, media);

    return 0;
}