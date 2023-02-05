#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int celsius, faren;
    
    //Inicia el programa
    cout<<"Por favor, ingrese una temperatura en grados Celsius: ";
    cin>>celsius;
    
    //Se hace un cálculo para pasar el número en "celsius" a Farenheit en la variable "faren"
    faren = (celsius * 9/5) + 32;
    
    //Se devuelve el resultado y finaliza el programa
    cout<< celsius <<" en grados Farenheit es igual a " << faren << " °F.";
    return 0;
}
