#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int faren, celsius;
    
    //Inicia el programa
    cout<<"Por favor, ingrese una temperatura en grados Farenheit: ";
    cin>>faren;
    
    //Se hace un cálculo para pasar el número en "faren" a Celsius en la variable "celsius"
    celsius = (faren - 32) * 5/9;
    
    //Se devuelve el resultado y finaliza el programa
    cout<< faren <<"°F en grados Celsius es igual a " << celsius << "°.";
    return 0;
}

