#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define cem 100
#define cin 50
#define vin 20
#define dez 10 
#define co 5
#define do 2
#define um 1 

int main(int argc, char *argv[])
{
  FILE *fro = fopen("./input/1018.in", "r");
  FILE *fwr = fopen("./output/1018.out", "w+");
  int countBankNotes[7], value;
  
  while (fscanf(fro, "%d", &value)!=EOF) {
    fprintf(fwr, "%d\n", value);
    for (int i = 0;i<(sizeof countBankNotes / sizeof countBankNotes[0]);i++) {
      countBankNotes[i] = 0;
    } 
    while (value > 0) {
      if (value >= 100) {
        value = value - 100;
        countBankNotes[0]++;
      }else if (value>=50) {
        value = value - 50;
        countBankNotes[1]++;
      }else if (value>=20) {
        value = value - 20;
        countBankNotes[2]++;
      }else if (value>=10) {
        value = value - 10;
        countBankNotes[3]++;
      }else if (value>=5) {
        value = value - 5;
        countBankNotes[4]++;
      }else if (value >=2) {
        value = value - 2;
        countBankNotes[5]++;
      }else if (value>=1) {
        value = value - 1;
        countBankNotes[6]++;
      }
    }
  fprintf(fwr, "%d nota(s) de R$ 100,00\n", countBankNotes[0]);
  fprintf(fwr, "%d nota(s) de R$ 50,00\n", countBankNotes[1]);
  fprintf(fwr, "%d nota(s) de R$ 20,00\n", countBankNotes[2]);
  fprintf(fwr, "%d nota(s) de R$ 10,00\n", countBankNotes[3]);
  fprintf(fwr, "%d nota(s) de R$ 5,00\n", countBankNotes[4]);
  fprintf(fwr, "%d nota(s) de R$ 2,00\n", countBankNotes[5]);
  fprintf(fwr, "%d nota(s) de R$ 1,00\n\n", countBankNotes[6]);
  }
  

  return EXIT_SUCCESS;
}
