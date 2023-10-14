#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fro = fopen("./input/1019.in", "r");
  FILE *fwr = fopen("./output//1019.out", "w+");
  int seconds = 0, minutes =0, hours=0;
  while (fscanf(fro, "%d", &seconds)!=EOF) {
    if(seconds>3600){
      hours = seconds / 3600;
      seconds = seconds % 3600;
    }
    minutes = seconds / 60;
    seconds = seconds % 60;
    fprintf(fwr, "%d:%d:%d\n", hours, minutes, seconds); 
  }

  return EXIT_SUCCESS;
}
