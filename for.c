/*este programa ejemplifica el uso de ciclos con el comando for
  fecha 12 sept 2023
  Sebastian Healy*/

#include <stdio.h>

void saluda (void);

int main(void)
{
  saluda();
  return 0;

}

void saluda(void)
{
  int x; //variable para el for
  int i;

  printf("Cuantas veces quiere que se repita un Hola Mundo?\n");
  scanf("%d", &i);

  for(x = 1; x <=  i; x++)//se repite i veces
    {
      printf("%d - Hola Mundo!\n", x);
    }
}
