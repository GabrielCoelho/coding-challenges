#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
  FILE *fro = fopen ("./input/1042.in", "r");
  FILE *fwr = fopen ("./output/1042.out", "w+");

  int to_be_sorted[3], sorted_array[3], lines;
  for (int k = 0; k < 2; k++)
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
      for (int j = 0; j < 3; j++)
        {
          fprintf (fwr, "%d\n", sorted_array[j]);
        }
      fprintf (fwr, "\n");
      for (int j = 0; j < 3; j++)
        {
          fprintf (fwr, "%d\n", to_be_sorted[j]);
        }
      fprintf (fwr, "\n");
    }

  return EXIT_SUCCESS;
}
