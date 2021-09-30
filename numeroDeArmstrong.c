#include <stdio.h>
#include <math.h>

int main(){
    
int numeroOriginal, numero, ultimoNumero, digito, computar;

   printf("Informe o valor a ser analisado: ");
    scanf("%d", &numero);

    computar = 0;
    numeroOriginal = numero;


    digito = (int) log10(numero) + 1;

    while(numero > 0){ 
        /* Recebendo o ultimo digito: */
        ultimoNumero = numero % 10;


        computar = computar + round(pow(ultimoNumero, digito));


        /* Removendo o ultimo digito: */
        numero = numero / 10;
    }
    numero = computar;

     if(numeroOriginal == computar){

        printf("%d É um numero de Armstrong\n", computar);
      }
    else{
      
        printf("%d não é um numero de Armstrong\n", computar);
    }

    return 0;
}

