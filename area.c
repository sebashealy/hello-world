#include <stdio.h>  // Incluye la librería estándar de entrada/salida

void calcula(void);  // Declaración de la función calcula

int main(void)  // Función principal del programa
{
  calcula();  // Llama a la función calcula

  return 0;  // Termina la función main y retorna 0
}

void calcula(void)  // Definición de la función calcula
{
  int base, altura, area;  // Declara tres variables enteras: base, altura y area

  printf("Dar la base y altura");  // Imprime un mensaje solicitando la base y altura

  scanf("%d", &base);  // Lee un valor entero del usuario y lo almacena en base
  scanf("%d", &altura);  // Lee un valor entero del usuario y lo almacena en altura

  area = base * altura;  // Calcula el área multiplicando base por altura y almacena el resultado en area

  printf("el resultado es %d", area);  // Imprime el valor de area
}
