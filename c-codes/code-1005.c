#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float avg(float x, float y){return (x+y)/2;}

int main(int argc, char *argv[])
{
  float A, B, MEDIA;
  printf("Informe o valor de A: "); 
  scanf("%f", &A);

  printf("Informe o valor de B: ");
  scanf("%f", &B);

  MEDIA = avg(A, B);

  printf("MEDIA = %.5f\n", MEDIA);



  return EXIT_SUCCESS;
}
