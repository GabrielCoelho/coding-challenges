#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
  FILE *fro = fopen ("./input/1042.in", "r");
  FILE *fwr = fopen ("./output/1042.out", "w+");

  int to_be_sorted[3], sorted_array[3], maior = 0, menor = 0;
  while (EOF != (fscanf (fro, "%*[^\n]"), fscanf (fro, "%*c")))
    {
      for (int i = 0; i < 3; i++)
        {
          fscanf (fro, "%d", &to_be_sorted[i]);
          if (i == 0)
            {
              sorted_array[0] = to_be_sorted[i];
              sorted_array[2] = to_be_sorted[i];
            }
          else
            {
              if (to_be_sorted[i] > sorted_array[2])
                {
                  sorted_array[1] = sorted_array[2];
                  sorted_array[2] = to_be_sorted[i];
                }
              else if (to_be_sorted[i] < sorted_array[0])
                {
                  sorted_array[1] = sorted_array[0];
                  sorted_array[0] = to_be_sorted[i];
                }
              else
                {
                  sorted_array[1] = to_be_sorted[i];
                }
            }
        }
    }

  return EXIT_SUCCESS;
}
