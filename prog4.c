// Programa 4
// Maria Eduarda Ferreira Jeronimo


#include <stdio.h>

int main() {
    int numero;

    do {
        // Solicita ao usuário que insira um número
        printf("Digite um número inteiro positivo (0 para sair): ");
        scanf("%d", &numero);

        if (numero > 0) {
            int fatorial = 1;
            
            // Calcula o fatorial do número
            for (int i = 1; i <= numero; i++) {
                fatorial *= i;
            }
            
            // Exibe o número e seu fatorial
            printf("%d! = %d\n", numero, fatorial);
        } else if (numero < 0) {
            printf("Número negativo. Digite um número inteiro positivo.\n");
        }

    } while (numero != 0);

    return 0;
}