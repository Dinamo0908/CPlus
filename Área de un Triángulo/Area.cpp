/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    int base, altura, area;
    
    //Inicia el programa
    cout<<"Por favor, introduzca la medida de la base de un triangulo (solo números): ";
    cin>>base;
    cout<<"Por favor, introduzca la medida de la altura de un triangulo (solo números): ";
    cin>>altura;
    
    //Se calcula el área del triángulo con los valoren ingresados en la variable "base" y "altura"
    area = base * altura / 2;
    
    //Se devuelve el resultado y finaliza el programa
    cout<<"El resultado final del area es " << area;
    return 0;
}
