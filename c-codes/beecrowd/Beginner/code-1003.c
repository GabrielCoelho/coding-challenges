#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A, B, SOMA; 
  FILE *fRO;
  FILE *fWR;
  fRO = fopen("./input/1003.in", "r");
  fWR = fopen("./output/1003.out", "w+");

  while(fscanf(fRO, "%d %d", &A, &B) !=EOF)
  {
    SOMA = A + B;
    fprintf(fWR, "SOMA = %d\n", SOMA);
  }
  return EXIT_SUCCESS;
}
