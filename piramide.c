#include <stdio.h>

int main() {

    char letra;


    printf("Ingrese una letra en mayuscula: ");
    scanf("%c", &letra);

    if (letra >= 'A' && letra <= 'Z')
      {
        int fila, columna;
        int n = letra - 'A' + 1;
        //los caracteres tambien tienen un valor numerico por lo que tenemos que sacar que numero es contando A como el primer valor numerico

        for (fila = 1; fila <= n; fila++)
          /*establecemos el valor de la primera fila y ponemos que incremente de fila utilizando como condicion que mientras sea inferior o igual a nuestra
            variable n es decir el valor numerico de nuestra letra introducida utilizando A como el primer valor numerico, con esto ya establecimos nuestro num de filas*/
          {
            for (columna = 1; columna <= fila; columna++)
              //lo mismo y ya utilizamos como condicion, inferior o igual al numero de filas
              {
                printf("%c", 'A' + columna - 1);
              }
            printf("\n");
          }
    } else {
        printf("Por favor, ingrese una letra mayúscula.\n");
    }

   return 0;
}






