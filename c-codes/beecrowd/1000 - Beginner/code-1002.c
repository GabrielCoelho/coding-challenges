#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define n 3.14159

int main(int argc, char *argv[])
{
  double R, A;

  FILE *fRO;
  FILE *fWR;

  fRO = fopen("./input/1002.in", "r");
  fWR = fopen("./output/1002.out", "w+");

  while(fscanf(fRO, "%lf", &R) != EOF)
  {
    A = n * (R*R);
    fprintf(fWR, "%.4lf \n", A);
  }
  return EXIT_SUCCESS;
}
