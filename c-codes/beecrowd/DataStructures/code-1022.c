#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
somaFrac (int n1, int d1, int n2, int d2)
{
  return ((n1 * d2) + (n2 * d1));
}
int
subFrac (int n1, int d1, int n2, int d2)
{
  return ((n1 * d2) - (n2 * d1));
}
int
multFrac (int n1, int n2)
{
  return (n1 * n2);
}
int
simplificador (int a, int b)
{
  int c, d;
  // Checa se o numerador é 0. Neste caso, retorno um para continuar sem
  // simplificação.
  if (a == 0)
    {
      return 1;
    }
  // Se o denominador for maior que o numerador, declaro c para numerador e d
  // para denominador.
  else if (b > a)
    {
      c = a;
      d = b;
    }
  // do contrário, d recebe o numerador e c o denominador
  else
    {
      c = b;
      d = a;
    }

  /* Aqui é o programa fazendo o MDC.
   * Se dá para dividir o maior número pelo menor, o programa faz o seguinte:
   * Define a sobra(resto) para essa divisão.
   * Define o menor número para ser dividido pelo resto.
   * Assim que o programa consegue encontrar uma divisão exata, ele para e
   * retorna o último resto sendo, ele, o MDC.
   */
  while (d % c != 0)
    {
      a = d % c;
      d = c;
      c = a;
    }
  return c;
}

int
main (int argc, char *argv[])
{
  FILE *fro = fopen ("./input/1022.in", "r");
  FILE *fwr = fopen ("./output/1022.out", "w+");

  char barra1, operador, barra2;
  int N, numerador1, numerador2, denominador1, denominador2, resultado1,
      resultado2, simplificado1, simplificado2, divisor;

  // Recebe o número de operações realizadas
  fscanf (fro, "%d", &N);

  // Enquanto estiver realizando operações...
  for (int i = 0; i < N; i++)
    {
      fscanf (fro, "%d %c %d %c %d %c %d", &numerador1, &barra1, &denominador1,
              &operador, &numerador2, &barra2, &denominador2);
      if (operador == '+')
        {
          resultado1
              = somaFrac (numerador1, denominador1, numerador2, denominador2);
          resultado2 = multFrac (denominador1, denominador2);
        }
      else if (operador == '-')
        {
          resultado1
              = subFrac (numerador1, denominador1, numerador2, denominador2);
          resultado2 = multFrac (denominador1, denominador2);
        }
      else if (operador == '*')
        {
          resultado1 = multFrac (numerador1, numerador2);
          resultado2 = multFrac (denominador1, denominador2);
        }
      else if (operador == '/')
        {
          resultado1 = multFrac (numerador1, denominador2);
          resultado2 = multFrac (denominador1, numerador2);
        }

      divisor = simplificador (resultado1, resultado2);
      simplificado1 = resultado1 / divisor;
      simplificado2 = resultado2 / divisor;

      fprintf (fwr, "%d/%d=", resultado1, resultado2);
      if (simplificado1 > 0 && simplificado2 > 0)
        {
          fprintf (fwr, "%d/%d\n", simplificado1, simplificado2);
        }
      else
        {
          if (simplificado2 < 0)
            {
              simplificado2 = -simplificado2;
              simplificado1 = -simplificado1;
            }
          fprintf (fwr, "%d/%d\n", simplificado1, simplificado2);
        }
    }

  return 0;
}
