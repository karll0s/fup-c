#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios
    int n, p = 1, m = 0, v;
    
    printf("Digite o número de jogadores: ");
    scanf("%d", &n); // Corrigido para ler o valor de n corretamente

    while (p <= n) { // Corrigido para p <= n
        int d1, d2;
        d1 = rand() % 6 + 1; // Gera um número aleatório entre 1 e 6
        d2 = rand() % 6 + 1; // Gera um número aleatório entre 1 e 6
        printf("Jogador %d - Soma dos dados: %d\n", p, d1 + d2);
        
        if (d1 + d2 > m) { // Verifica se a soma atual é maior que a maior soma encontrada até agora
            v = p; // Atualiza o jogador vencedor
            m = d1 + d2; // Atualiza a maior soma
        }
        
        p++; // Incrementa p para o próximo jogador
    }

    printf("O vencedor foi o jogador %d.\n", v); // Imprime o vencedor
    return 0;
}
