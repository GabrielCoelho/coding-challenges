#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int productId, quantityBought, c=0; 
  float productPrice, finalPrice = 0;
  FILE *fro = fopen("./input/1010.in", "r");
  FILE *fwr = fopen("./output/1010.out", "w+");
  while (fscanf(fro, "%d %d %f", &productId, &quantityBought, &productPrice)!=EOF) {
    c++;
    
    finalPrice = finalPrice + (quantityBought * productPrice);
    if (c==2) {
      fprintf(fwr, "VALOR A PAGAR: R$ %.2f\n", finalPrice);
      finalPrice = 0;
      c = 0;
    }
  }


  return EXIT_SUCCESS;
}
