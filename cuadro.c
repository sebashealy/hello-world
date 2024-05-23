/* este programa se supone que tiene que mostrar 6 lineas cada uno mostrando los numeros del 1 al 6, las lineas impares mostraran esta serie en numeros escendentes y las lineas pares en manera descendente*/

#include <stdio.h>

void longitud (void);
int main(void)
{
  longitud();
  return 0;

}

void longitud (void)
{
  int c, n, i;

  printf("dame un numero del 1 al 9\n");
  scanf("%d", &n);

  printf("\n");
  for(c = 1; c <= n; c++)
    //la variable c la vamos a usar para contar las lineas
  {
    if(c % 2 == 0)
      //aqui estamos poniendo como condicion si la linea es par
      {
        for(i = 1; i <= n; i++)
          {
            printf("%d", i);
          }
        //pusimos como instruccion si la linea es par imprimir de manera ascendente desde el 1 al numero insertado
      }
      else
              {
                for(i = n; i > 0; i--)
                {
                  printf("%d", i);

                }//y aqui si no es par imprimir desde el numero insertado hasta 1

              }
    printf("\n");
    //ahora ponemos un salto de linea antes de la llave del for principal para saltar linea antes de que cuente el salto de linea
  }
  printf("\n"); //este salto solo es estetico
}

