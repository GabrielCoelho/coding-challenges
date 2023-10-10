#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  double X, Y, x1, x2, y1, y2, distance;
  FILE *fro = fopen("./input/1015.in", "r");
  FILE *fwr = fopen("./output/1015.out", "w+");
  while (fscanf(fro, "%lf %lf %lf %lf", &x1, &y1, &x2, &y2)!=EOF) {
    X = x2-x1;
    Y = y2-y1;
    distance = sqrt((pow(X,2))+(pow(Y,2)));
    fprintf(fwr, "%.4lf\n", distance);
  }

  return EXIT_SUCCESS;
}
