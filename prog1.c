// Programa 1
// Maria Eduarda Ferreira Jeronimo

#include <stdio.h>
#include <math.h>

float numero, num_quadrado, num_cubo, num_raizquadrada, num_raizcubica, resto_divisao;
int main() {

// Solicita ao usuario para digitar um numero.
printf("Digite um número:\n");
scanf("%f", &numero);
  if (numero <= 0) {
      printf("O programa foi encerrado.\n"); // O programa se encerra ao digitar um numero negativo.
  }
  else {
    if (numero > 0) {
       
        // A variavel recebe o resultado da funcao de um numero elevado ao quadrado.
       num_quadrado = pow(numero, 2);
         printf("O resultado de %.2f elevado ao quadrado e igual a: %.2f \n", numero, num_quadrado);
        
        // A variavel recebe o resultado da funcao de um numero elevado ao cubo.
       num_cubo = pow(numero, 3);
         printf("O resultado de %.2f elevado ao cubo e igual a: %.2f \n", numero, num_cubo);

        // A variavel recebe o resultado da funcao da raiz quadrada de um numero.
       num_raizquadrada = sqrt(numero);
         printf("O resultado da raiz quadrada de %.2f e igual a: %.2f \n", numero, num_raizquadrada);
        
        // A variavel recebe o resultado da funcao da raiz cubica de um numero.
       num_raizcubica = cbrt(numero);
         printf("O resultado da raiz cubica de %.2f e igual a: %.2f \n", numero, num_raizcubica);

         // Calcula e exibe o resto da divisão do número (transformado em inteiro) por 3.
        int resto_divisao = (int)numero % 3;
         printf("O resto da divisao de %.2f por 3 e igual a: %d \n", numero, resto_divisao);
       return 0;
    }
  }

}