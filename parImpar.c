#include <stdio.h>

// Declaración de la función compara
void compara(void);

int main(void)
{
  compara(); // Llamada a la función compara
  return 0;  // Finaliza el programa
}

void compara (void)
{
  int x;        // Variable para almacenar el número ingresado por el usuario
  int residuo;  // Variable para almacenar el residuo de la división por 2

  printf("Introduzca un numero\n");
  scanf("%d", &x);  // Lee el número ingresado por el usuario

  residuo = x % 2;  // Calcula el residuo de la división de x por 2

  // Verifica si el residuo es 0, lo que significa que el número es par
  if(residuo == 0) {
    printf("\nel numero es par\n");
  }
  else {  // Si el residuo no es 0, el número es impar
    printf("\nel numero es impar\n");
  }
}
