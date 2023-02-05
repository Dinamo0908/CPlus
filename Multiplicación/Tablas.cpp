#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int i, j = 1, mult;
    
    //Empieza el programa
    cout<<"Por favor, seleccione la tabla de multiplicación de cualquier numero (Ingresa un numero): ";
    cin>>i;
    
    //Se crea un bucle while con el número seleccionado para multiplicarlo
    cout<<"Tabla de multiplicar del " << i << endl;
    while (j <= 10) {
        mult = i * j;
        cout<< i << " * " << j << " = " << mult << endl;
        j++;
    }
    return 0;
}
