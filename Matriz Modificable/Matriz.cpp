#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numeros[100][100], filas, columnas;
    
    //Empieza el programa
    cout<<"Por favor, ingrese el numero de filas: ";
    cin >> filas;
    cout<<"Por favor, ingrese el numero de columnas: ";
    cin >> columnas;
    
    //Se crea un bucle for para almacenar los elementos en el array bidimensional
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese un numero [" << i << "] [" << j << "]";
            cin >> numeros[i][j];
        }
    }
    
    //Se crea un bucle for para mostrar los resultados
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << numeros[i][j] << endl;
        }
    }

    return 0;
}
