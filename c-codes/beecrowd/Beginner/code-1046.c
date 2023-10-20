#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
  FILE *fro = fopen ("./input/1046.in", "r");
  FILE *fwr = fopen ("./output/1046.out", "w+");

  int game_start_time, game_end_time;

  while (fscanf (fro, "%d %d", &game_start_time, &game_end_time) != EOF)
    {
      if (game_end_time > game_start_time)
        {
          fprintf (fwr, "O JOGO DUROU %d HORA(S)\n",
                   (game_end_time - game_start_time));
        }
      else if (game_start_time > game_end_time)
        {
          fprintf (fwr, "O JOGO DUROU %d HORA(S)\n",
                   ((24 - game_start_time) + game_end_time));
        }
      else if (game_start_time == game_end_time)
        {
          fprintf (fwr, "O JOGO DUROU 24 HORA(S)\n");
        }
    }

  return EXIT_SUCCESS;
}
