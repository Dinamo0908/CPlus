#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int n, suma = 0;
    
    //Empieza el programa
    cout<<"Por favor, introduzca la secuencia de numeros que desee sumar: ";
    cin >> n;
    
    //Se crea un bucle for para sumar todos los numeros desde el 0 hasta el indicado 
    for (int i = 0; i < n; i++) {
        suma += i;
    }
    
    //Se devuelve el resultado y finaliza 
    cout << "La suma es " << suma << endl;
    return 0;
}
