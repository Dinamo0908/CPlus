#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int i, suma = 0;
    
    //Se crea un bucle for para sumar todos los números del 0 al 30
    for (i = 0; i <= 30; i++) {
        cout<<i<<endl;
        suma = suma + i;
    }
    
    //Se devuelve el resultado de la suma y finaliza el programa
    cout<<"La suma es igual a " << suma << ".";
    return 0;
}
