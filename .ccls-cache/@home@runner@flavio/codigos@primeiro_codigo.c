#include <stdio.h>
#include <stdlib.h>

int main() {

  char flavio[30], wok[30];
  int idade;

  printf("\nFala seu nome pra nois:\n");
  scanf("%s", &flavio);

  printf("\nMlk, e a tua idade:\n");
  scanf("%d", &idade);

  printf("\nSeloko mel, o qq tu eh menor:\n");
  scanf("%s", &wok);

  printf("\nSeguinte entao menor, tu eh o %s e voce tem %d anos e eh um %s "
         "mlk.\nAssim eu solo msm!",
         flavio, idade, wok);
  return 0;
}