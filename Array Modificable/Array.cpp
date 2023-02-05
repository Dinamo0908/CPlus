#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numeros[100], elementos;
    
    //Empieza el programa
    cout<<"Por favor, ingrese el numero de elementos que se encontraran en el array: ";
    cin >> elementos;
    
    //Se crea un bucle for para ingresar los elementos en el array
    for (int i = 0; i < elementos; i++) {
        cout << "Ingrese un numero: ";
        cin >> numeros[i]; //Se guardan los elementos en el array
    }
    
    //Se muestras los resultados y finaliza el programa
    for (int i = 0; i < elementos; i++) {
        cout << i + 1 << " -> " << numeros[i] << endl;
    }
    return 0;
}
