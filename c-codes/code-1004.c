#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int PROD, A, B;

  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  PROD = A * B;

  printf("PROD = %d\n", PROD);

  return EXIT_SUCCESS;
}
