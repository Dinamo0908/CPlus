#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numeros[3][3];
    
    //Empieza el programa
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"Digite un numero, por favor: [" << i << "][" << j << "]";
            cin >> numeros[i][j];
        }
    }
    
    //Se crea un bucle for para mostrar la matriz original
        cout << "Matriz Original\n";
        for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++)  {
            cout << numeros[i][j];
        }
        cout << "\n";
    }
    
    //Se crea un bucle for para mostrar la matriz transpuesta
        cout << "Matriz Transpuesta\n";
        for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++)  {
            cout << numeros[j][i];
        }
    }

    return 0;
}
