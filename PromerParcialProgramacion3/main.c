#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

#define TAMN 10

struct
{
    int id;
    char procesador[20];
    char marca[20];
    float precio;

}typedef Notebook;

void ordenarNotebooks(Notebook* notebook, int tam);
/*
 Dada la estructura notebook(id, procesador, marca, precio)
 generar una función que permita ordenar un array de dicha estructura por marca.
  Ante igualdad de marca deberá ordenarse por precio. Hardcodear datos y mostrarlos desde el main. **/
int main()
{

    Notebook arrayNotebook[TAMN]= {{1, "Intel i5", "Asus", 20000},{2, "Intel i6", "Hp", 2200},{3, "Intel i1", "Hp", 23420},{1, "Intel i9", "Asus", 30000},{4, "Radeon", "Asus", 23450},{5, "Intel i6", "LG", 80000}};
    ordenarNotebooks(arrayNotebook, TAMN);
}

void ordenarNotebooks(Notebook* notebook, int tam)
{

    int i;
    int j;
    Notebook auxNotebook[tam]; // Variable auxiliar

    /*METODO DE BURBUJEO POR DOS CRITERIOS*/
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(notebook[i].marca,notebook[j].marca)<0) //Ordenado por tipo
            {
                auxNotebook[i] = notebook[i];
                notebook[i] = notebook[j];
                notebook[j] = auxNotebook[i];
            }
            else if(strcmp(notebook[i].marca,notebook[j].marca)==0&& notebook[i].precio < notebook[j].precio ) // En caso de que los tipos sean iguales, utilizo el criterio por nombre
            {
                auxNotebook[i] = notebook[i];
                notebook[i] = notebook[j];
                notebook[j] = auxNotebook[i];
            }
        }
    }
    printf("\nID\t\tPROCESADOR\t\tMARCA\t\tPRECIO\n");
    for(i=0; i<tam; i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%f\n", notebook[i].id,notebook[i].procesador,notebook[i].marca,notebook[i].precio);

    }

}
