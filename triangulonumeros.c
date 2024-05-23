#include <stdio.h>

void imprime(void);

int main(void)
{
  imprime();
  return 0;
}

void imprime(void)
{
  int fila, columna;

  for(fila = 1; fila <= 4; fila++)
    {
    for(columna = 1; columna <= fila; columna++)
      {
        printf("%d", columna);
        printf(".");
      }
    printf("\n");
    }
}

