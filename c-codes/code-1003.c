#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A, B, SOMA; 
  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  SOMA = A + B;

  printf("SOMA = %d\n", SOMA);


  return EXIT_SUCCESS;
}
