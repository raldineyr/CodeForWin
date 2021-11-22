#include <stdio.h>

int main(void) {

  int numero, ultimoValor = 0;

  printf("Informe o valor: ");
  scanf("%d,",&numero);

  do
  {
    ultimoValor = (ultimoValor * 10) + (numero % 10);

    numero /= 10;
  } while (numero != 0);

  printf("%d",ultimoValor);

  return 0;
}
