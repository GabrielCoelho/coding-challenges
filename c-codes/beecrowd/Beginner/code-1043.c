#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
  FILE *fro = fopen ("./input/1043.in", "r");
  FILE *fwr = fopen ("./output/1043.out", "w+");
  // It's only possible to form a triangle if the sum of two sides is greater than the reminescent side.

  double side_a_or_basis, side_b_or_otherbasis, side_c_or_height,
      result_as_perimeter_or_area;
  while (fscanf (fro, "%lf %lf %lf", &side_a_or_basis, &side_b_or_otherbasis,
                 &side_c_or_height)
         != EOF)
    {
    /* I'm using the absolute function to get the comparison between the sides right */
      if (abs (side_b_or_otherbasis - side_c_or_height) < side_a_or_basis
          && side_a_or_basis < side_b_or_otherbasis + side_c_or_height
          && abs (side_a_or_basis - side_c_or_height) < side_b_or_otherbasis
          && side_b_or_otherbasis < side_a_or_basis + side_c_or_height
          && abs (side_a_or_basis - side_b_or_otherbasis) < side_c_or_height
          && side_c_or_height < side_a_or_basis + side_b_or_otherbasis)
        {
          result_as_perimeter_or_area
              = side_a_or_basis + side_b_or_otherbasis + side_c_or_height;
          fprintf (fwr, "Perimetro = %.1lf\n", result_as_perimeter_or_area);
        }
      else
        {
          result_as_perimeter_or_area
              = (side_a_or_basis + side_b_or_otherbasis)
                * (side_c_or_height / 2);
          fprintf (fwr, "Area = %.1lf\n", result_as_perimeter_or_area);
        }
    }

  return EXIT_SUCCESS;
}
