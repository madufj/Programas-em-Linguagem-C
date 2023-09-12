// Programa 2
// Maria Eduarda Ferreira Jeronimo

#include <stdio.h>
#include <math.h>

int main() {
    float hora;
    int horas, minutos, segundos;

    // Solicita a hora ao usuário.
    printf("Digite a hora no formato HH.MM: ");
    scanf("%f", &hora);

    // Extrai a parte inteira para obter as horas.
    horas = (int)hora;

    // Calcula os minutos a partir da parte decimal, multiplicando por 100 e arredondando.
    minutos = round((hora - horas) * 100);
    segundos = minutos * 60;

    // Verifica se as horas e minutos estão dentro dos limites.
    if (horas >= 0 && horas <= 23 && minutos >= 0 && minutos < 60) {
        // Exibe o resultado.
        printf("%d horas e %d minutos equivalem a %d minutos e %d segundos.\n", horas, minutos, horas * 60, segundos);

        int totalMinutos = horas * 60 + minutos;

        // Calcula a quantidade total de segundos
        segundos = totalMinutos * 60;

        // Exibe os resultados separadamente
        printf("%.2f horas equivalem a %d minutos.\n", hora, totalMinutos);
        printf("%.2f horas equivalem a %d segundos.\n", hora, segundos);

    } else {
        // Caso os valores estejam fora dos limites, exibe uma mensagem de erro.
        printf("Hora ou minutos fora dos limites permitidos.\n");
    }

    return 0;
}