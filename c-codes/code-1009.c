#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char sellerName[100];
  double fixedSalary, totalSells, finalSalary;
  FILE *fro = fopen("./input/1009.in", "r");
  FILE *fwr = fopen("./output/1009.out", "w+");
  while (fscanf(fro, "%s %lf %lf", &sellerName, &fixedSalary, &totalSells)!=EOF) {
    finalSalary = (totalSells * 0.15) + fixedSalary;
    fprintf(fwr, "TOTAL = R$ %.2lf\n", finalSalary);
  }

  return EXIT_SUCCESS;
}
