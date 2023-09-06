/*
  jogo de adivinhação de um número
  Maria Eduarda Ferreira Jeronimo
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero_chute, numero_grande, numero, segundos;
double pontuacaofinal, erro, desconto;
int tentativas=5;
int pontuacao = 1000;
int main() {

    printf("*********\n");
    printf("* BEM VINDO (A) AO JOGO *\n");
    printf("*********\n");
    char ch = '\0';
    int sair = 0;

    while (!sair) {
        segundos = time(0);
        srand(segundos);
        numero_grande = rand();
        numero = numero_grande % 100;

        for(int t=1; t <= tentativas; ++t) {
            printf("Tentativa %d de %d.\n", t, tentativas);
            printf("Digite um numero: \n");
            scanf("%d", &numero_chute); // recebendo o numero digitado pelo usuario

            if (numero_chute < 0) {
                printf("O chute não pode ser negativo.\n");
                --t; // a condição necessaria e que o numero nao seja negativo
                continue; 
            }
            if (numero_chute == numero) {
                printf("Voce acertou! PARABENS\n");
                erro = (numero - numero_chute)/2;
                desconto = desconto - erro;
                break; // finalizando o jogo quando o usuario acertar 
            }
            else {
                if (numero_chute > numero){
                    printf("VOCE ERROU! (O numero que voce escolheu é maior que o "
                      "correto!)\n");
                    erro = (numero - numero_chute)/2;
                    desconto = desconto - erro; // se caso o numero digitado for maior que o numero
                } else{
                    printf("VOCE ERROU! (O numero que voce escolheu é menor que o "
                     "correto!)\n");
                    erro = (numero - numero_chute)/2;
                    desconto = desconto + erro; // quando o numero digitado for menor que o numero
                }
            }
        }
        printf("Jogo encerrado\n");
        printf("o número era %d\n", numero);
        pontuacaofinal = pontuacao - desconto; // pontuacao final arredondada pelo programa
        printf("você obteve %lf pontos.\n", pontuacaofinal);
        printf("Deseja continuar jogando? (s = sim / n = não)\n");
        setbuf(stdin, NULL); // limpando o buffer do teclado
        ch = getchar();
        if (ch == 'S' || ch == 's') // respostas se o usuario deseja continuar
            sair = 0;
        else
            sair = 1;
    }
    return 0;
}