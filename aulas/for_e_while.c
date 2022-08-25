#include <stdio.h>
#include <stdlib.h>

int main() {

  int contador, nmr, exit; // nmr = numero

  do {

    system("clear"); // para limpar o console
    printf("\nDigite a tabuada desejada:\n");
    scanf("%d", &nmr);

    printf("\nTabuada do %d:\n", nmr);

    for (contador = 1; contador <= 10; contador++) {

      printf("\n %dx%d=%d\n", nmr, contador, nmr * contador);
    }

    printf("\nDeseja outra? sim(1) ou nao(2)?:\n");
    scanf("%d", &exit);

  } while (exit == 1);

  return 0;
}

// código com for e while