#include "BIBLIO.h"
#include <stdio.h>
#include <stdlib.h>

void mostrarArray(int array[],int tam)
{

    int i;
   // printf("Direccion del array %d\n",array);
    for(i=0;i<tam;i++)
    {
        printf("%d\n",array[i]);
    }
}
void cargarArray(int array[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &array[i]);
    }
}
int buscarValor(int array[],int tam,int valor)
{
    int indice=-1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(array[i]==valor)
        {
            indice=i;
            break;
        }
    }

    return indice;
}

