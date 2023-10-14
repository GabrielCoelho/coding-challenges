#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  FILE *fro = fopen("./input/1036.in", "r");
  FILE *fwr = fopen("./output/1036.out", "w+");
  double a, b, c, x[1], delta;
  while(fscanf(fro, "%lf %lf %lf", &a, &b, &c)!=EOF) {
    delta = pow(b, 2) - 4*a*c;
    if(a==0 || delta <0){
      fprintf(fwr, "Impossivel calcular\n");
    }else {
      x[0] = (-b + sqrt(delta))/(2*a);
      x[1] = (-b - sqrt(delta))/(2*a);
      for (int i = 0;i<=1;i++) {
        fprintf(fwr, "R%d = %.5lf\n", i+1, x[i]);
      }
    }
  }

  return EXIT_SUCCESS;
}
