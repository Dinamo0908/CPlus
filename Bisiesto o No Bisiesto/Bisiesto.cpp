#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int year;
    
    //Empieza el programa
    cout<<"Por favor, inserte un anio: ";
    cin>>year;
    
    //Se verifica que lo ingresado en la variable "year" sea un numero de 4 dígitos y luego de eso se verifica si el año ingresado es bisiesto o no
    if (year >= 1000) {
        cout << "El anio ingresado es valido." << endl;
        if ( (year % 400 == 0 || year % 4 == 0) && year >= 1752) {
            cout << "El anio ingresado es bisiesto.";
        } else {
            cout << "El anio ingresado no es bisiesto.";
        }
    } else {
        cout << "Por favor, ingrese un anio valido.";
    }

    return 0;
}
