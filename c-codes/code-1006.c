#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double A, B, C, MEDIA;
  scanf("%lf", &A);
  scanf("%lf", &B);
  scanf("%lf", &C);

  MEDIA = ((A*2)+(B*3)+(C*5))/10;

  printf("MEDIA = %.1lf\n", MEDIA);
  return EXIT_SUCCESS;
}
