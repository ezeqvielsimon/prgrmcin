#include <stdio.h>
#include <stdlib.h>
#define TAM 5


int main()
{
    int miArray[TAM] ={};
    int indice;

    cargarArray(miArray,TAM);
    mostrarArray(miArray,TAM);
    indice = buscarValor(miArray, TAM, 5);

    if(indice!=-1)
    {
        printf("El indice es: %d",indice);
    }
    else
    {
        printf("Valor inexistente!!");
    }



    return 0;

}

