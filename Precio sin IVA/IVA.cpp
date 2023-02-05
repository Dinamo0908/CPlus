#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    float precio, iva, precioFinal;
    
    //Empieza el programa
    cout<<"Por favor, ingresa el precio del producto con IVA que ha comprado: "; 
    cin>>precio;
    
    //Se calcula el precio del IVA y se lo resta del precio original
    iva = (16 * precio / 100);
    precioFinal = precio - iva;
    
    //Se devuelve el resultado y finaliza el programa;
    cout<<"El precio sin iva del producto es " << precioFinal;
    return 0;
}
