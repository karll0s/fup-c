#include <stdio.h>

int main() {
    int inicio, fim, contador = 0;

    printf("Digite o início do intervalo: ");
    scanf("%d", &inicio);

    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);

    for (int i = inicio; i <= fim; ++i) {
        int p = 1; // Inicializa a flag para verificar se é primo
        for (int d = 2; d <= i / 2; ++d) {
            if (i % d == 0) {
                p = 0;
                break;
            }
        }
        if (p == 1) { // Se p ainda for 1, o número é primo
            contador++;
        }
    }

    printf("Há %d números primos no intervalo de %d até %d.\n", contador, inicio, fim);

    return 0;
}
