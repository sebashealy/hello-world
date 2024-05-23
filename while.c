
//ejemplo de como funcionan los cicleos en while

#include <stdio.h>

void saluda (void); //declaracion de funcion

int main (void)
{
  saluda();
  return 0;
}

void saluda(void)
{
  int x = 1;
  int num;

  printf("Cuantas veces quieres que imprima hola mundo?");
    scanf("%d", &num);

   while( x <= num)
      {
                printf("%d - Hola Mundo!\n",x);

                x++;
      }
}
