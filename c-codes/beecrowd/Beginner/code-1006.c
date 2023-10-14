#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double A, B, C, MEDIA;
  FILE *fro = fopen("./input/1006.in", "r");
  FILE *fwr = fopen("./output/1006.out", "w+");
  while (fscanf(fro, "%lf %lf %lf", &A, &B, &C)!=EOF) {
    MEDIA = ((A*2) + (B*3) + (C*5))/10;
    fprintf(fwr, "MEDIA = %.1lf\n", MEDIA);
  }
  return EXIT_SUCCESS;
}
