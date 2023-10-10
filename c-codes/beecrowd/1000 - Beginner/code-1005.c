#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  double A, B, MEDIA;
  FILE *fRO = fopen("./input/1005.in", "r");
  FILE *fWR = fopen("./output/1005.out", "w+");
  while(fscanf(fRO, "%lf %lf", &A, &B) != EOF)
  {
    MEDIA = ((A*3.5)+(7.5*B))/11;
    fprintf(fWR, "MÉDIA = %.5lf\n", MEDIA);
  }
  return EXIT_SUCCESS;
}
