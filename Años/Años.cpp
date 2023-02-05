#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se  declaran las variables
    int anioActual, anioX, resultado;
    
    //Inicia el programa
    cout << "Por favor, ingresa el anio actual: ";
    cin >> anioActual;
    cout << "Ahora, ingresa cualquier anio, el que tu decidas: ";
    cin >> anioX;
    
    //Se verifica si el año actual es mayor que el año X y se devuelve un tipo de resultado en base a resultado
    if (anioActual < anioX) {
        resultado = anioX - anioActual;
        cout << "Faltan " << resultado << " anio/s para llegar al anio " << anioX;
    } else if (anioActual > anioX) {
        resultado = anioActual - anioX;
        cout << "Han pasado " << resultado << " anio/s desde el anio " << anioActual;
    }

    return 0;
}
