#include <stdio.h>
#include <stdlib.h>

int main() {

  int nmr1, nmr2, sinal;

  printf("\nDigite um número:\n");
  scanf("%d", &nmr1);

  printf("\nDigite mais um número:\n");
  scanf("%d", &nmr2);

  printf("\nMLk vc quer oq? soma(1) ou subtraçao(2)\n");
  scanf("%d", &sinal);

  if (sinal == 1) {
    printf("\nMenor a soma entre %d e %d é igual a %d", nmr1, nmr2,
           nmr1 + nmr2);
  } else {
    printf("\nMenor a subtração entre %d e %d é igual a %d", nmr1, nmr2,
           nmr1 - nmr2);
  }

  return 0;
}

// if e else