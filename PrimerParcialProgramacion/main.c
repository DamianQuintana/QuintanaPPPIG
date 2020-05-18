#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
/*
Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto
y devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main. *
*/

float aplicarDescuento(float precioProducto);
int main()
{
   float producto;
   float productoConDescuento;
    printf("Ingrese el precio del producto: $");
    scanf("%f", &producto);
    productoConDescuento = aplicarDescuento(producto);
    printf("\nEl precio del prducto con descuento es de: $%.2f",productoConDescuento);
}
float aplicarDescuento(float precioProducto)
{

    precioProducto = precioProducto - ((precioProducto*5)/100);
    return precioProducto;
}
