#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int mon[20], i, mayor = 0;
    
    //Se crea un bucle for para que se ingresen los valores de las 20 monedas, los cuales se guardan en la variable "mayor"
    for (i = 1; i <= 20; i++)  {
       cout << "Por favor, ingrese el valor de la moneda numero " << i << ": ";
       cin >> mon[i];
       if (mon[i] > mayor) {
           mayor = mon[i];
       } else {
           mayor = mayor;
       }
    }
    
    //Se devuelve el resultado y finaliza el programa
    cout << "La moneda con mayor valor es " << mayor;
    return 0;
}
