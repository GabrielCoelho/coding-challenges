#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fro = fopen("./input/1020.in", "r");
  FILE *fwr = fopen("./output/1020.out", "w+");
  int age, years, months, days;
  while (fscanf(fro, "%d", &age)!=EOF) {
    years = 0;
    months = 0;
    days = 0;
    while (age > 0) {
      if (age>=365) {
        age = age - 365;
        years ++;
      }else if (age>=30) {
        age = age - 30;
        months ++;
      } else if (age>0) {
        age = age - 1;
        days ++;
      }
    }
    fprintf(fwr, "%d ano(s)\n%d mês(es)\n%d dia(s)\n\n", years, months, days);
  }

  return EXIT_SUCCESS;
}
