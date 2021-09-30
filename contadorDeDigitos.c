#include <stdio.h>

int main(void) {

int numero;
int contador = 0;

printf("Informe um numero: ");
scanf("%d", &numero);


do 
{
contador ++;



numero = numero / 10;

} while(numero != 0);


printf("Total de digitos: %d\n", contador);
  return 0;
}
