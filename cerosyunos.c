include <stdio.h>

void imprime(void);

int main(void){

  imprime();
  return 0;

}

void imprime(void)
{
  int fila, x, y;

  for(fila = 1; fila <=5; fila++){
    for(x = 4; x >= fila; x--){
      printf("0");
    }
    for(y = 1; y<= fila; y++)
      {
        printf("1");
      }
    printf("\n");
      }
}
