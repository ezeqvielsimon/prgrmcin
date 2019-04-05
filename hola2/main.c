#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// contrabarra cero corte de muestra para cadena (\0)

int main()
{
    char nombre[6];
    char otroNombre[50]="Jose Perez";
    int largo;
    int compara;

    //strncpy(nombre,otroNombre,5);

    printf("su nombre es: %s", nombre);
    //printf("Ingrese su nombre: ");
    //scanf("%[^\n]",nombre);
    //gets(nombre);
    //fgets(nombre, 50, stdin);
    //largo = strlen(nombre);

    //printf("Su nombre es: %s",nombre);
    //printf("%d",largo);

    //compara = stricmp(nombre,"pepe");        //hace lo mismo que esta abajo, compara cadenas de caracteres
    //printf("%d",compara);
   /* if(nombre == "pepe")              y devuelve cero si son iguales, otro numero si son distintos
    {
        printf("Ud se llama pepe");
    }
    */


    return 0;
}
