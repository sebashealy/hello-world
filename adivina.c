#include <stdio.h>

// Declaración de la función adivina
void adivina(void);

int main(void) {
  adivina(); // Llamada a la función adivina
  return 0;  // Finaliza el programa
}

void adivina(void) {
  int x = 0;            // Variable para almacenar el número ingresado por el usuario
  int intentos = 0;     // Contador de intentos
  int adivinaste = 0;   // Indicador de si se ha adivinado el número

  // Bucle que permite al usuario adivinar hasta 5 veces o hasta que adivine correctamente
  while (intentos <= 5 && adivinaste == 0) {
    printf("dar un numero entre 1 y 1000\n");
    scanf("%d", &x);  // Lee el número ingresado por el usuario

    if (x == 5) {  // Si el número ingresado es 5
      printf("Adivinaste!!!");
      adivinaste = 1;  // Cambia el indicador a 1 para salir del bucle
    } else if (x > 5) {  // Si el número ingresado es mayor que 5
      printf("el numero es mayor ");
      adivinaste = 0;  // Mantiene el indicador en 0
      intentos++;      // Incrementa el contador de intentos
    } else if (x < 5) {  // Si el número ingresado es menor que 5
      printf("el numero es menor");
      adivinaste = 0;  // Mantiene el indicador en 0
      intentos++;      // Incrementa el contador de intentos
    }
  }
}
