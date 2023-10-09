#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A, B, C, D, DIFERENCA;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &D);

  DIFERENCA = ((A*B)-(C*D));

  printf("DIFERENCA = %d\n", DIFERENCA);





  return EXIT_SUCCESS;
}
