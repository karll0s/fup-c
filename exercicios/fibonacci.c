#include <stdio.h>

int main() {
    int n, primeiro = 0, segundo = 1, proximo;

    printf("Digite a quantidade de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci:\n");
    printf("%d, %d", primeiro, segundo);

    for (int i = 3; i <= n; ++i) {
        proximo = primeiro + segundo;
        printf(", %d", proximo);
        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");

    return 0;
}
