#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x;
  float y; 
  FILE *fro = fopen("./input/1014.in", "r");
  FILE *fwr = fopen("./output/1014.out", "w+");
  while (fscanf(fro, "%d %f", &x, &y)!=EOF) {
    y = x / y;
    fprintf(fwr, "%.3f km/l\n",y); 
  }

  return EXIT_SUCCESS;
}
