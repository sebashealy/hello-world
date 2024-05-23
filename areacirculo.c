//este codigo le solicita al usuario el raio de un circulo, una vez que el usuario inerta este dato el programa le calcula el area de su circulo

#include <stdio.h>

void calculararea(void);

int main(void)
{
  calculararea();
  return 0;}

void calculararea (void)
{ int radio;
  float area;
  
  printf("Introduzca el radio del circulo: ");
  scanf("%d", &radio);
  area= radio*radio*3.1415926;

  printf("el area del circulo es igual a %f", area \n);
  
    