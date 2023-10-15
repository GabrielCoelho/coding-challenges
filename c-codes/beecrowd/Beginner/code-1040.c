#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static const int grade1 = 2;
static const int grade2 = 3;
static const int grade3 = 4;
static const int grade4 = 1;

int
main (int argc, char *argv[])
{
  FILE *fro = fopen ("./input/1040.in", "r");
  FILE *fwr = fopen ("./output/1040.out", "w+");
  double studentScores[4], sumScores, media, examScore;
  for (int j = 1; j < 7; j++)
    {
      media = 0;
      sumScores = 0;
      for (int i = 0; i < (sizeof studentScores / sizeof studentScores[0]);
           i++)
        {
          fscanf (fro, "%lf", &studentScores[i]);
          if (i == 0)
            {
              studentScores[i] = studentScores[i] * grade1;
            }
          else if (i == 1)
            {
              studentScores[i] = studentScores[i] * grade2;
            }
          else if (i == 2)
            {
              studentScores[i] = studentScores[i] * grade3;
            }
          else if (i == 3)
            {
              studentScores[i] = studentScores[i] * grade4;
            }
          sumScores = sumScores + studentScores[i];
        }
      media = sumScores / (grade1 + grade2 + grade3 + grade4);
      fprintf (fwr, "Media: %.1lf\n", media);
      if (media > 7.0)
        {
          fprintf (fwr, "Aluno aprovado.\n");
        }
      else if (media < 5.0)
        {
          fprintf (fwr, "Aluno reprovado.\n");
        }
      else if (media >= 5.0 && media <= 6.9)
        {
          fprintf (fwr, "Aluno em exame.\n");
          fscanf (fro, "%lf", &studentScores[0]);
          fprintf (fwr, "Nota do exame: %.1lf\n", studentScores[0]);
          media = (media + studentScores[0]) / 2;
          if (media >= 5.0)
            {
              fprintf (fwr, "Aluno aprovado.\n");
            }
          else
            {
              fprintf (fwr, "Aluno reprovado.\n");
            }
          fprintf (fwr, "Media final: %.1lf\n", media);
        }
    }
  return EXIT_SUCCESS;
}
