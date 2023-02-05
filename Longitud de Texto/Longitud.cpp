#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    //Se declaran las variables
    char cadena[50];
    int longit;
    
    //Empieza el programa
    cout<<"Por favor, introduce un texto: ";
    cin>>cadena;
    
    //Se lee la longitud de la cadena ingresada y se devuelve dicho resultado
    longit = strlen(cadena);
    cout<<"El numero de caracteres en el texto es " << longit << ".";

    return 0;
}
