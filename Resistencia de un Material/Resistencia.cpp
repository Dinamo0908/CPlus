#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las  variables
    int resistencia;
    
    //Empieza el programa
    cout<<"Por favor, ingrese el numero de resistencia de un material (0, 10, 120, etc.): ";
    cin>>resistencia;
    
    //Se crea un bucle if para verificar si el valor ingresado es mayor o menor a 100
    if (resistencia >= 100) {
        cout<<"La resistencia del material ingresado es mayor a 100.";
    } else {
        cout<<"La resistencia de este material es menor a 100.";
    }
    
    //Finaliza el programa
    return 0;
}
