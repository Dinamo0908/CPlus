#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int i, suma = 0;
    
    //Se crea un bucle for para sumar todos los números pares entre el 1 y el 30
    for (i = 1; i <= 30; i++) {
    if(i%2 == 0) {
        cout<<i<<endl;
        suma = suma + i;
     }
    }
    
    //Se devuelve el resultado y finaliza el programa 
    cout<<"La suma de todos los numeros pares entre el 1 y el 30 es " << suma;
    return 0;
}
