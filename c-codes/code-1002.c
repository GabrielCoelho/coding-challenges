#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float R, n, A;
  n = 3.14159;

  printf("Digite o valor do Raio do círculo: ");
  scanf("%f", &R);

  A = n * (R*R);

  printf("A = %.4f\n", A);

  return EXIT_SUCCESS;
}
