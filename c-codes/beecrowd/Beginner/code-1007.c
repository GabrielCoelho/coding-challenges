#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A, B, C, D, DIFERENCA;
  FILE *fro = fopen("./input/1007.in", "r");
  FILE *fwr = fopen("./output/1007.out", "w+");
  while(fscanf(fro, "%d %d %d %d", &A, &B, &C, &D)!=EOF)
  {
    DIFERENCA = ((A*B)-(C*D));
    fprintf(fwr, "DIFERENCA = %d\n", DIFERENCA);
  }
  return EXIT_SUCCESS;
}
