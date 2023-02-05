#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int suma = 0, elevacion = 0, numero; 
    
    //Emepieza el programa
    cout<<"Por favor, ingrese la cantidad de elementos a sumar: ";
    cin>>numero;
    
    //Se crea un bucle for para sumar la cantidad de elementos ingresados, con una potencia cada uno segun el orden en el que se encuentran
    for (int i = 0; i < numero; i++) {
        elevacion = pow(2, i);
        suma += elevacion;
    }
    
     cout<<"La suma en total es " << suma;
    return 0;
}
