#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fro = fopen("./input/1035.in", "r");
  FILE *fwr = fopen("./output/1035.out", "w+");
  int A, B, C, D;
  while (fscanf(fro, "%d %d %d %d ", &A, &B, &C, &D)!=EOF) {
    if(A % 2 != 0 || B<C || D<A || (C+D)<(A+B) || C<0 || D<0){
      fprintf(fwr, "Valores nao aceitos\n");
    }else {
      fprintf(fwr, "Valores aceitos\n");
    }
  }


  return EXIT_SUCCESS;
}
