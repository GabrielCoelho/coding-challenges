#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fro = fopen("./input/1037.in", "r");
  FILE *fwr = fopen("./output/1037.out", "w+");

  float number;
  while (fscanf(fro, "%f", &number)!=EOF) {
    if(number>=0 && number<=25){
      fprintf(fwr, "Intervalo [0,25]\n");
    }else if (number >25 && number <=50) {
      fprintf(fwr, "Intervalo (25,50]\n");
    }else if (number >50 && number <=75) {
      fprintf(fwr, "Intervalo (50,75]\n");
    }else if (number >75 && number <=100) {
      fprintf(fwr, "Intervalo (75,100]\n");
    }else {
      fprintf(fwr, "Fora de intervalo\n");
    }
  }
  
  return EXIT_SUCCESS;
}
