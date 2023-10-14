#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fro = fopen("./input/1017.in", "r");
  FILE *fwr = fopen("./output/1017.out", "w+");
  int hours;
  double averageSpeed;
  while (fscanf(fro, "%d %lf", &hours, &averageSpeed)!=EOF) {
    averageSpeed = (hours*averageSpeed)/12;
    fprintf(fwr, "%.3lf\n", averageSpeed);
  }
  return 0;
}
