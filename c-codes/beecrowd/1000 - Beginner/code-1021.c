#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fro = fopen("./input/1021.in", "r");
  FILE *fwr = fopen("./output/1021.out", "w+");
  int countBankNotes[6], countBankPennys[6]; 
  double value;
  while (fscanf(fro, "%lf ", &value)!=EOF) {
    for (int i = 0;i<6;i++) {
      countBankNotes[i] = 0;
      countBankPennys[i] = 0;
    } 
    while (value > 0.00) {
      if (value >= 100.00) {
        value = value - 100.00;
        countBankNotes[0]++;
      }else if (value>=50.00) {
        value = value - 50.00;
        countBankNotes[1]++;
      }else if (value>=20.00) {
        value = value - 20.00;
        countBankNotes[2]++;
      }else if (value>=10.00) {
        value = value - 10.00;
        countBankNotes[3]++;
      }else if (value>=5.00) {
        value = value - 5.00;
        countBankNotes[4]++;
      }else if (value >=2.00) {
        value = value - 2.00;
        countBankNotes[5]++;
      }else if (value>=1.00) {
        value = value - 1.00;
        countBankPennys[0]++;
      }else if (value>=0.50) {
        value = value - 0.50;
        countBankPennys[1]++;
      } else if (value>=0.25) {
        value = value - 0.25;
        countBankPennys[2]++;
      }else if (value>=0.10) {
        value = value - 0.10;
        countBankPennys[3]++;
      }else if (value>=0.05) {
        value = value - 0.05;
        countBankPennys[4]++;
      }else if (value >= 0.01) {
        value = value - 0.01;
        countBankPennys[5]++;
      }else{break;}
    }
  fprintf(fwr, "NOTAS:\n%d nota(s) de R$ 100,00\n", countBankNotes[0]);
  fprintf(fwr, "%d nota(s) de R$ 50,00\n", countBankNotes[1]);
  fprintf(fwr, "%d nota(s) de R$ 20,00\n", countBankNotes[2]);
  fprintf(fwr, "%d nota(s) de R$ 10,00\n", countBankNotes[3]);
  fprintf(fwr, "%d nota(s) de R$ 5,00\n", countBankNotes[4]);
  fprintf(fwr, "%d nota(s) de R$ 2,00\n", countBankNotes[5]);
  fprintf(fwr, "MOEDAS:\n%d moeda(s) de R$ 1,00\n", countBankPennys[0]);
  fprintf(fwr, "%d moeda(s) de R$ 0,50\n", countBankPennys[1]);
  fprintf(fwr, "%d moeda(s) de R$ 0,25\n", countBankPennys[2]);
  fprintf(fwr, "%d moeda(s) de R$ 0,10\n", countBankPennys[3]);
  fprintf(fwr, "%d moeda(s) de R$ 0,05\n", countBankPennys[4]);
  fprintf(fwr, "%d moeda(s) de R$ 0,01\n", countBankPennys[5]);
  }
  

  return EXIT_SUCCESS;
}
