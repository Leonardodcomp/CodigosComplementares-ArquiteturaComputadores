#include <stdio.h>

// Função recursiva pura para maximizar o overhead de chamadas
int fibonacci_stress(int n) {
    if (n <= 1)
        return n;
    
    // A soma de duas chamadas recursivas gera uma árvore binária de execução
    // Isso estressa a unidade de controle e a pilha de chamadas
    return fibonacci_stress(n - 1) + fibonacci_stress(n - 2);
}

int main() {
    int n = 15; // Valor sugerido para estresse equilibrado no gem5
    
    printf("Iniciando estresse de pipeline: Fibonacci(%d)...\n", n);
    
    int resultado = fibonacci_stress(n);
    
    printf("Resultado: %d\n", resultado);
    printf("Estresse concluído com sucesso!\n");
    
    return 0;
}