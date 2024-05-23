/* Ejemplo de variables char*/
#include <stdio.h>

void DatoCaracter();

int main ()
{
  DatoCaracter();
    return 0;
}
void DatoCaracter (void)
{
  char letra1 = 'A';
  char letra2 = 'B';
  char letra3 = 'C';

  printf("Las primeras letras del abecedario son: %c, %c, %c", letra1, letra2, letra3);


