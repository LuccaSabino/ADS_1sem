#include <math.h> //biblioteca para resolver certas questoes matematicas
#include <stdio.h>
#include <stdlib.h>

int main() {

  float num, resultado;

  printf("\nDigite um número para a função f(x)= √x+(x/2)+x^x\n");
  scanf("%f", &num);

  resultado = sqrt(num) + (num / 2) + pow(num, num);

  printf("\nO resultado para f(x)= √x+(x/2)+x^x é igual:\n %f", resultado);

  return 0;
}

// sqrt é raiz quadrada e pow é potenciação