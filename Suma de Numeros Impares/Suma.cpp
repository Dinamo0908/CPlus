#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int i, suma = 0;
    
    //Se crea un bucle for en el cual se suman todos los números impares entre el 0 y el 30
    for (i = 0; i <= 30; i++) {
        if (i % 2 != 0) {
                cout<< i <<endl;
                suma += i;
        }
    }
    
    //Se devuelve el resultado y finaliza el programa
    cout << "La suma de los numeros impares es " << suma << ".";
    return 0;
}
