#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define hotdog 4.00
#define salad 4.50
#define bacon 5.00
#define toast 2.00
#define soda 1.50


int main(int argc, char *argv[])
{
  FILE *fro = fopen("./input/1038.in", "r");
  FILE *fwr = fopen("./output/1038.out", "w+");

  int X, Y;
  while (fscanf(fro, "%d %d", &X, &Y)!=EOF) {
    switch (X) {
      case 1:
      fprintf(fwr, "Total: R$ %.2lf\n", (Y*hotdog));
      break;
      case 2: 
      fprintf(fwr, "Total: R$ %.2lf\n", (Y*salad));
      break;
      case 3:
      fprintf(fwr, "Total: R$ %.2lf\n", (Y*bacon));
      break;
      case 4:
      fprintf(fwr, "Total: R$ %.2lf\n", (Y*toast));
      break;
      case 5:
      fprintf(fwr, "Total: R$ %.2lf\n", (Y*soda));
      break;
default:
      fprintf(fwr, "Opção inexistente\n");
    }
  }

  return EXIT_SUCCESS;
}
