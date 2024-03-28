#include <stdio.h>
#include <stdlib.h>

int main()
{
    int da, ma, aa, dn, mn, an, id_a, id_m, id_d;

    printf("Digite a data atual: (dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &da, &ma, &aa);

    printf("Digite a data de nascimento: (dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &dn, &mn, &an);

    id_a = aa-an;
    id_m = ma-mn;
    id_d = da-dn;

    if(id_d<0)
    {
        id_d = id_d+30; // id_d += 30;
        id_m = id_m-1;  // id_m--;
    }

    if(id_m<0)
    {
        id_m = id_m+12;
        id_a = id_a-1;
    }

    printf("A pessoa tem %d anos, %d meses, %d dias de vida.",
                        id_a,    id_m,     id_d);



    return 0;
}