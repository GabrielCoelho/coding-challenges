#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A, B, X;

  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  X = A + B;

  printf("X = %d\n", X);

  return EXIT_SUCCESS;
}
