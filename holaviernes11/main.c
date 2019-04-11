#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD_ALUMNOS 4

void getString(char mensaje[], char input[]);

int main()
{
    char nombres[CANTIDAD_ALUMNOS][50]={"Alfredo","Rogelio","Julieta","Pablo"};
    char apellidos[CANTIDAD_ALUMNOS][50]={"Mercurio","Agua","Roberto","McCartney"};
    int notas[CANTIDAD_ALUMNOS]={2,4,7,10};
    int edades[CANTIDAD_ALUMNOS]={54,24,37,18};
    int i;
    for(i=0;i<CANTIDAD_ALUMNOS;i++)
    {
        if(nombres[i] !=i)
        {
            printf("\nnombre: %s apellido: %s edad: %d nota: %d",nombres[i],apellidos[i],edades[i],notas[i]);
        }
    }

    char unNombre[50];
    getString("\nIngrese nombre: \n",&unNombre);
    printf("El nombre que ingreso es: %s",&unNombre);


    return 0;
}
void getString(char mensaje[], char input[])
{
    printf(mensaje);
    scanf("%s",input);
}
