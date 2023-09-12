// Programa 3
// Maria Eduarda Ferreira Jeronimo


#include <stdio.h>

int main() {
    int a, b, c;
    
    // Solicita os três números positivos
    printf("Digite três números inteiros positivos: ");
    scanf("%d %d %d", &a, &b, &c);

    int opcao;

    // Apresenta o menu e lê a opção do usuário
    printf("Escolha uma das opções:\n");
    printf("1 - Mostre os números em ordem crescente\n");
    printf("2 - Mostre os números em ordem decrescente\n");
    printf("3 - Mostre o menor número entre os demais\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        // Ordena e exibe os números em ordem crescente
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if (b > c) {
            int temp = b;
            b = c;
            c = temp;
        }
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        printf("%d - %d - %d\n", a, b, c);
    } else if (opcao == 2) {
        // Ordena e exibe os números em ordem decrescente
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if (b < c) {
            int temp = b;
            b = c;
            c = temp;
        }
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        printf("%d - %d - %d\n", a, b, c);
    } else if (opcao == 3) {
        // Encontra e exibe o menor número
        if (a <= b && a <= c) {
            printf("%d\n", a);
        } else if (b <= a && b <= c) {
            printf("%d\n", b);
        } else {
            printf("%d\n", c);
        }
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}