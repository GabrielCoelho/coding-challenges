#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int
biggestValue (int a, int b, int c)
{
  if (a > b && b > c)
    {
      return a;
    }
  else if (a < b && b > c)
    {
      return b;
    }
  else if (a < b && b < c)
    {
      return c;
    }
  else if ((a == b && a > c) || (a == c && a > b))
    {
      return a;
    }
  else if ((b == c && b > a) || (b == a && b > c))
    {
      return b;
    }
  else if (c == a && c == b)
    {
      return a;
    }
}

int
main (int argc, char *argv[])
{
  FILE *fro = fopen ("./input/1045.in", "r");
  FILE *fwr = fopen ("./output/1045.out", "w+");

  double side_a, side_b, side_c, arrangementMule;
  while (fscanf (fro, "%lf %lf %lf", &side_a, &side_b, &side_c) != EOF)
    {
      // Arrange them in decreasing order, so side_a is the biggest.
      if (side_a <= side_b || side_a <= side_c)
        {
          if (side_b < side_c)
            {
              while (side_b < side_c)
                {
                  arrangementMule = side_b;
                  side_b = biggestValue (side_a, side_b, side_c);
                  side_c = arrangementMule;
                }
            }
          arrangementMule = side_a;
          side_a = biggestValue (side_a, side_b, side_c);
          side_b = arrangementMule;
          if (side_b < side_c)
            {
              arrangementMule = side_b;
              side_b = side_c;
              side_c = arrangementMule;
            }
        }
      if (side_a >= (side_b + side_c))
        {
          fprintf (fwr, "NAO FORMA TRIANGULO\n");
        }
      else
        {

          if (pow (side_a, 2) == (pow (side_b, 2) + pow (side_c, 2)))
            {
              fprintf (fwr, "TRIANGULO RETANGULO\n");
            }
          else if (pow (side_a, 2) > pow (side_b, 2) + pow (side_c, 2))
            {
              fprintf (fwr, "TRIANGULO OBTUSANGULO\n");
            }
          else if (pow (side_a, 2) < (pow (side_b, 2) + pow (side_c, 2)))
            {
              fprintf (fwr, "TRIANGULO ACUTANGULO\n");
            }
          if (side_a == side_b && side_a == side_c)
            {
              fprintf (fwr, "TRIANGULO EQUILATERO\n");
            }
          else if ((side_a == side_b && side_a != side_c)
                   || (side_b == side_c && side_b != side_a)
                   || (side_a == side_c && side_a != side_b))
            {
              fprintf (fwr, "TRIANGULO ISOSCELES\n");
            }
        }
    }
  return EXIT_SUCCESS;
}
