#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159

int main(int argc, char *argv[])
{
  double radius, volume;
  FILE *fro = fopen("./input/1011.in", "r");
  FILE *fwr = fopen("./output/1011.out", "w+");
  while (fscanf(fro, "%lf", &radius)!=EOF) {
    volume = (4.0/3) * pi * (radius * radius * radius);
    fprintf(fwr, "VOLUME = %.3lf\n", volume);
  }

  return EXIT_SUCCESS;
}
