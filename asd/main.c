#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);
float sacarPromedio(int suma,int cantidad);

int main()
{
   int elNumeroIngresado;
   float promedio;
   elNumeroIngresado = pedirNumero();
   printf("el numero ingresado fue: %d",elNumeroIngresado);
   promedio = sacarPromedio(94,5);
   printf("el promedio fue :%f",promedio);
}
float sacarPromedio(int suma, int cantidad)
{
    float retorno;
    retorno = (float)suma/cantidad;
    return retorno;
}

int pedirNumero()

{
    int numero;
   do
   {
    printf("Ingrese numero: ");
   scanf("%d",&numero);

   }while(numero < 0 || numero > 10);

}



