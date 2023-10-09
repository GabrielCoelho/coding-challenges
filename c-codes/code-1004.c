#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int PROD, A, B;
  FILE *fRO;
  FILE *fWR;
  fRO = fopen("./input/1004.in", "r");
  fWR = fopen("./output/1004.out", "w+");
  while(fscanf(fRO, "%d %d", &A, &B) != EOF)
  {
    PROD = A * B;
    fprintf(fWR, "PROD = %d\n", PROD);
  }
  return EXIT_SUCCESS;
}
