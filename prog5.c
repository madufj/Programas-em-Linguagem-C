//Programa 5
// Maria Eduarda Ferreira Jeronimo

#include <stdio.h>

int main() {
    int idade, pessoas_peso_altura = 0, pessoas_idade_altura = 0;
    float peso, altura, soma_idades = 0;
    int pessoas_total = 10; // Total de pessoas

    for (int i = 0; i < pessoas_total; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        
        printf("Digite o peso da pessoa %d (em Kg): ", i + 1);
        scanf("%f", &peso);
        
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &altura);

        // 1) Calcula a média das idades
        soma_idades += idade;
        
        // 2) Conta pessoas com peso superior a 80Kg e altura inferior a 1,50 metros
        if (peso > 80 && altura < 1.50) {
            pessoas_peso_altura++;
        }

        // 3) Calcula a porcentagem de pessoas com idade entre 10 e 30 anos
        if (idade >= 10 && idade <= 30 && altura > 1.90) {
            pessoas_idade_altura++;
        }
    }

    // 1) Média das idades
    float media_idades = soma_idades / pessoas_total;

    // 2) Quantidade de pessoas com peso superior a 80Kg e altura inferior a 1,50 metro
    printf("2) Quantidade de pessoas com peso > 80Kg e altura < 1,50m: %d\n", pessoas_peso_altura);

    // 3) Porcentagem de pessoas com idade entre 10 e 30 anos e altura > 1,90m
    float porcentagem_idade_altura = (float)pessoas_idade_altura / pessoas_total * 100;
    printf("3) Porcentagem de pessoas com idade entre 10 e 30 anos e altura > 1,90m: %.2f%%\n", porcentagem_idade_altura);

    // 1) Média das idades
    printf("1) Média das idades das dez pessoas: %.2f\n", media_idades);

    return 0;
}