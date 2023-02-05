#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numeros[] = {1, 2, 3, 4, 5};
    int suma = 0;
    
    //Empieza el programa
    for (int i = 0; i < 5; i++) {
        suma += numeros[i];
    }
    
    //Se devuelven los resultados y finaliza el programa
    cout<<"La suma de los numeros del array es: " << suma << "." << endl;

    return 0;
}
