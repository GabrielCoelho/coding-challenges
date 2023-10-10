#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A, B, X;

  FILE *fROM;
  FILE *fWRT;
  fWRT = fopen("./output/1001.out", "w+");
  fROM = fopen("./input/1001.in", "r");
  while(fscanf(fROM, "%d %d", &A, &B) != EOF){
    X = A + B;
    fprintf(fWRT, "%d \n", X);
  }
  
  fclose(fROM);
  fclose(fWRT);


  /*
  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);
*/
  return EXIT_SUCCESS;
}
