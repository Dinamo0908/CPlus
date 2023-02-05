#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numero;
    
    //Inicia el programa
    cout << "Por favor, ingrese un numero: ";
    cin >> numero;
    
    //Se verifica si el número ingresado es mayor, menor o igual a 0
    if (numero > 0) {
        cout << "El numero es positivo";
    } else if (numero < 0) {
        cout << "El numero es negativo";
    } else {
        cout << "El numero es neutro";
    }
    
    //Finaliza el programa 
    return 0;
}
