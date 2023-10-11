#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(int argc, char *argv[])
{
  float A, B, C, recTriangle, radiusCircle, trapezium, square, rectangle;
  FILE *fro = fopen("./input/1012.in", "r");
  FILE *fwr = fopen("./output/1012.out", "w+");
  while (fscanf(fro, "%f %f %f", &A, &B, &C)!=EOF) {
    recTriangle = (A*C)/2;
    radiusCircle = pi*(C*C);
    trapezium = ((A + B) * C)/ 2;
    square = B*B;
    rectangle = A * B;
    fprintf(fwr, "TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n\n", recTriangle, radiusCircle, trapezium, square, rectangle);
  }

  return EXIT_SUCCESS;
}
