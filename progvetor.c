// Programa que realiza operacoes com vetores e ponteiros.

#include <stdio.h>

/* Retorna o valor da soma dos elementos do vetor */
int soma(int numeros[]) {
    int *ponteiro = numeros;
    int total = 0;

    while (*ponteiro != 0) {
        total += *ponteiro;
        ponteiro++;
    }

    return total;
}

/* Retorna a quantidade de elementos válidos do vetor */
int tamanho(int numeros[]) {
    int *ponteiro = numeros;
    int count = 0;

    while (*ponteiro != 0) {
        count++;
        ponteiro++;
    }

    return count;
}

/* Retorna a média dos valores do vetor */
float media(int numeros[]) {
    int *ponteiro = numeros;
    int total = 0;
    int count = 0;

    while (*ponteiro != 0) {
        total += *ponteiro;
        count++;
        ponteiro++;
    }

    if (count > 0) {
        return (float)total / count;
    } else {
        return 0.0;
    }
}

/* Remove elementos repetidos do vetor */
void nao_repetido(int numeros[]) {
    int *ponteiro = numeros;
    int *ponteiroResultado = numeros;

    while (*ponteiro != 0) {
        int *temp = numeros;
        int repetido = 0;

        while (temp < ponteiro) {
            if (*temp == *ponteiro) {
                repetido = 1;
                break;
            }
            temp++;
        }

        if (!repetido) {
            *ponteiroResultado = *ponteiro;
            ponteiroResultado++;
        }

        ponteiro++;
    }

    *ponteiroResultado = 0;
}

int main() {
    int numeros[50] = {0};
    int tamanhoVetor = 0;
    int numero;

    // Pede ao usuário para inserir os números no vetor
    printf("Digite os numeros inteiros maiores que zero (digite 0 para finalizar):\n");
    while (1) {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero == 0 || tamanhoVetor >= 50) {
            break;
        }

        if (numero > 0) {
            numeros[tamanhoVetor] = numero;
            tamanhoVetor++;
        } else {
            printf("Por favor, insira um número maior que zero.\n");
        }
    }

    printf("Soma de numeros = %d\n", soma(numeros));
    printf("Numero de elementos = %d\n", tamanho(numeros));
    printf("Media de numeros = %.1f\n", media(numeros));

    nao_repetido(numeros);

    printf("Numeros nao repetidos: [");
    int *ponteiro = numeros;
    while (*ponteiro != 0) {
        printf("%d", *ponteiro);
        ponteiro++;
        if (*ponteiro != 0) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}