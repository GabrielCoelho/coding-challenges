#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

float maiorAB(int x, int y){
  return (x + y + abs(x-y))/2;
}

int main(int argc, char *argv[])
{
  int A, B, C;
  float maior;
  FILE *fro = fopen("./input/1013.in", "r");
  FILE *fwr = fopen("./output/1013.out", "w+");
  while (fscanf(fro, "%d %d %d", &A, &B, &C)!=EOF) {
    maior = maiorAB(A, B);
    maior = maiorAB(maior, C);
    fprintf(fwr, "%.0f é o maior\n", maior);
  }

  return EXIT_SUCCESS;
}
