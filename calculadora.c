/*este codigo es una cañlculadora que enseña 5 opciones, sumar,restar, multiplicar, dividir y salir*/

#include <stdio.h>

void calculadora(void);
int main(void)
{
  calculadora();
  return 0;
}

void calculadora(void)
{
  float opc, primero, segundo, resultado;

  printf("1.Suma\n2.Resta\3.Multiplicacion\n4.Division\n5.Salir \n ingresa un numero del 1 al 5");
  scanf("%f",&opc);

  if(opc==1)
    {
      printf("Ha escogido la opcion suma, ingrese su primer numero");
      scanf("%f", &primero);

      printf("ingrese su segundo numero");
      scanf("%f", &segundo);

      resultado = primero + segundo;

      printf("%f", resultado);
    }
  if(opc==2)
    {
      printf("Ha escogida la opcion resta, ingrese su primer numero");
      scanf("%f", &primero);

      printf("Ingrese el numero por el cual quiere restar %f", primero);
      scanf("%f", &segundo);

      resultado = primero - segundo;

      printf("%f", resultado);

    }
  if(opc==3)
    {
      printf("Ha escogido la opcion multiplicacion, ingrese su primer numero");
      scanf("%f", &primero);

        printf("Ingrese su segundo numero");
      scanf("%f", &segundo);

      resultado = primero * segundo;

      printf("%f", resultado);

    }
  if(opc==4)
    {
      printf("Ha escogido la opcion dividir, ingrese su numerador");
        scanf("%f", &primero);

        printf("Ingrese su denominador");
          scanf("%f", &segundo);

          resultado = primero / segundo;
          printf("%f", resultado);
    }
  if(opc==5)
    {
      printf("Esta bien, hasta luego!");

    }
}

