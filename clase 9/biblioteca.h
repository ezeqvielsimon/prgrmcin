#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1


typedef struct
{
    int estado;
    float precio;
    char nombre[50];
    char codigoDeBarra[13];
    char fechaDeVencimiento[50];
    int idProveedor[50];
}eProducto;

typedef struct
{
    int idProveedor[50];
    char descripcion[50];
    char localidad[50];
    char cuit[50];
    char duenio[13];
}eProveedor;


eProducto pedirProducto();

void inicializarProductos(eProducto[],int);//OK

void mostrarProducto(eProducto);

void cargarArray(eProducto[], int);

void mostrarArray(eProducto[], int);

void construirArray(eProducto[], int);

int insertarProducto(eProducto [], int );

int dameLugarLibre(eProducto[],int);

int existeProducto(eProducto,eProducto[]);

int borrarProducto(eProducto[], int);

int editarProducto(eProducto [], int );

void hardCodearProductos(eProducto[], eProveedor[], int);
