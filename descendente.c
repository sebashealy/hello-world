/* el programa nos pide un numero entre el 11 y el 200, una vez ingresado 
lo lee y nos imprime una cuenta regresiva de el numero que pusimos hasta el 
numero 10, un gran ejemplo para el uso de condicionales for*/

#include <stdio.h>

int main()
{
  int numero;

    printf("ingresar un numero entre el 11 y el 200\n");
    scanf("%d", &numero);


for(numero; numero>=10; numero--){

  printf("%d\t", numero);
 }

return 0;
}

