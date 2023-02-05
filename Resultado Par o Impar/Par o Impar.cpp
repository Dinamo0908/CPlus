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
    int numero1, numero2, resultado;
    
    //Empieza el programa
    cout << "Por favor, ingrese un numero: ";
    cin >> numero1; 
    cout << "Ahora, ingrese otro numero: ";
    cin >> numero2;
    
    //Se guarda el resultado y se verifica si es par o impar
    resultado = numero1 + numero2;
    if (resultado % 2 == 0) {
        cout << "La suma de estos dos numeros es par";
    } else {
        cout << "La suma de estos dos numeros es impar";
    }

    return 0;
}
