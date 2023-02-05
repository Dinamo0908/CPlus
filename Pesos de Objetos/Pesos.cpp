/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int peso1, peso2;
    
    //Empieza el programa
    cout << "Por favor, ingrese el peso de un objeto: ";
    cin >> peso1;
    cout << "Ahora, ingrese el peso de otro objeto: ";
    cin >> peso2;
    
    //Se verifica si el primer peso ingresado es igual al cuarto del otro peso ingresado
    if (peso1 == peso2 * 0.25) {
        cout << "Los objetos cumplen con las especificaciones pautadas.";
    } else {
        cout << "Los objetos no cumplen con las especificaciones pautadas.";
    }
    
    //Finaliza el programa
    return 0;
}
