#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
  FILE *fro = fopen ("./input/1041.in", "r");
  FILE *fwr = fopen ("./output/1041.out", "w+");

  double x_value, y_value;
  while (fscanf (fro, "%lf %lf", &x_value, &y_value) != EOF)
    {
      if (x_value > 0 && y_value > 0)
        {
          fprintf (fwr, "Q1\n");
        }
      else if (x_value > 0 && y_value < 0)
        {
          fprintf (fwr, "Q4\n");
        }
      else if (x_value < 0 && y_value < 0)
        {
          fprintf (fwr, "Q3\n");
        }
      else if (x_value < 0 && y_value > 0)
        {
          fprintf (fwr, "Q2\n");
        }
      else if (x_value != 0 && y_value == 0)
        {
          fprintf (fwr, "Eixo X\n");
        }
      else if (x_value == 0 && y_value != 0)
        {
          fprintf (fwr, "Eixo Y\n");
        }
      else
        {
          fprintf (fwr, "Origem\n");
        }
    }

  return EXIT_SUCCESS;
}
