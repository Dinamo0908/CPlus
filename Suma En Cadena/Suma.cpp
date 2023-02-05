#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numero, suma = 0;
    
    //Empieza el programa
    cout << "Ingresar numeros enteros. Si se ingresa 0 o un numero entre 20 y 30, se devolvera la suma." << endl;
    do {
        cout << "Por favor, ingresa un numero entero, que no sea 0 o uno entre 20 y 30." << endl;
        cin >> numero;
        if (numero < 0) {
        suma += numero;
        }
    } while (((numero < 20) || (numero > 30)) && (numero != 0));
    cout << "La suma de todos estos numeros es " << suma << "." << endl;
    return 0;
}