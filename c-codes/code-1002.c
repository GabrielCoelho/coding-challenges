#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define n 3.14159

int main(int argc, char *argv[])
{
  float R, A;

  printf("Digite o valor do Raio do círculo: ");
  scanf("%f", &R);

  A = n * (R*R);

  printf("A = %.4f\n", A);

  return EXIT_SUCCESS;
}
