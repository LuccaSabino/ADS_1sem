#include <stdio.h>
#include <stdlib.h>

int main() {

  int contador, nmr;

  printf("\nDigite a tabuada desejada:\n");
  scanf("%d", &nmr);

  printf("\nTabuada do %d:\n", nmr);

  for (contador = 1; contador <= 10; contador++) {

    printf("\n %dx%d=%d\n", nmr, contador, nmr * contador);
  }
  return 0;
}

// código com for