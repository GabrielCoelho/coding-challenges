#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int idNumber, hoursWorked;
  float payPerHour, salary;
  FILE *fro = fopen("./input/1008.in", "r");
  FILE *fwr = fopen("./output/1008.out", "w+");
  while(fscanf(fro, "%d %d %f", &idNumber, &hoursWorked, &payPerHour)!=EOF)
  {
     salary = hoursWorked * payPerHour;
     fprintf(fwr, "NUMBER = %d\nSALARY = U$ %.2f\n\n", idNumber, salary);
  }

  return EXIT_SUCCESS;
}
