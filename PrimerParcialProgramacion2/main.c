#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

/*
Crear una función que se llame contarCaracteres
que reciba una cadena de caracteres como primer parámetro y un
carácter como segundo y devuelva la cantidad de veces que ese carácter aparece en la cadena *
*/

char inicializarVector(char* cadena[100]);
int contarCaracteres(char* cadena[100], char* caracter);

int main()
{
    char cadena[100];
    char caracter;
    int cantidad;

    printf("Ingrese una palabra: ");
    gets(cadena);
    printf("\nIngrese el caracter a buscar: ");
    fflush(stdin);
    scanf("%c", &caracter);
    cantidad = contarCaracteres(&cadena, &caracter);
    printf("\nLa letra %c se repite %d veces en la palabra ingresada", caracter, cantidad);
}

int contarCaracteres(char* cadena[100], char* caracter)
{
    int i;
    int contador = 0;
    int valor;

    for(i=0; i<100; i++)
    {
        if(strcmp(cadena[i],*caracter ) == 0 )
        {
            contador++;
        }
    }
    return contador;
}
char inicializarVector(char* cadena[100])
{
    int i;
    for(i=0; i<100; i++)
    {
        strcpy(*cadena[i], '0');
    }
    return cadena;
}

