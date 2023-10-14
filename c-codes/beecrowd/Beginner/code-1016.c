#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fro = fopen("./input/1016.in", "r");
  FILE *fwr = fopen("./output/1016.out", "w+");
  int km;
  while (fscanf(fro, "%d",&km)!= EOF) {
    km = km * 2;
    fprintf(fwr, "%d minutos\n", km);
  }
  return 0;
}
