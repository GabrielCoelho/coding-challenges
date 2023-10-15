#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool
isMult (int a, int b)
{
  return a % b;
}

int
main (int argc, char *argv[])
{
  FILE *fro = fopen ("./input/1044.in", "r");
  FILE *fwr = fopen ("./output/1044.out", "w+");

  int number_one, number_two;
  while (fscanf (fro, "%d %d", &number_one, &number_two) != EOF)
    {
      if (number_one < number_two)
        {
          if (isMult (number_one, number_two) == 0)
            {
              fprintf (fwr, "Sao Multiplos\n");
            }
          else
            {
              fprintf (fwr, "Nao sao Multiplos\n");
            }
        }
      else
        {
          if (isMult (number_two, number_one) == 0)
            {
              fprintf (fwr, "Sao Multiplos\n");
            }
          else
            {
              fprintf (fwr, "Nao sao Multiplos\n");
            }
        }
    }

  return EXIT_SUCCESS;
}
