#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);

int main()
{   int numeroIngresado;
    numeroIngresado = pedirNumero();
    printf("el numero es : %d",numeroIngresado);
    return 0;
}
int pedirNumero()
{
    int numero;
   do
   {
    printf("Ingrese numero: ");
   scanf("%d",&numero);

   }while(numero < 0 || numero > 10);


    return numero;
}




