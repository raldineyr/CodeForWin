#include <stdio.h>
#include <math.h>

  int main(){

  int numero, computar = 0;

  printf("Informe o valor: ");
  scanf("%d",&numero);


  computar = (numero == 0) ? 1 : ( log10(numero) + 1);


  printf("Total de digitos: %d\n", computar);

  return 0;
}
