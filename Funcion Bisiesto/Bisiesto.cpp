#include <iostream>
#include <conio.h>
void jerry(int);
using namespace std;

int main()
{
    //Se declaran las variables
    int year;
    
    //Empieza el programa
    cout<<"Por favor, inserte un anio: ";
    cin>>year;
    jerry(year);
    return 0;
}
    
    //Se crea una función para verificar si un numero es mayor a 4 digitos y si es bisiesto o no bisiesto
    void jerry(int x) {
        if (x >= 1000) {
        cout << "El anio ingresado es valido." << endl;
        if ((x % 400 == 0 || x % 4 == 0) && x >= 1752) {
            cout << "El anio ingresado es bisiesto.";
        } else {
            cout << "El anio ingresado no es bisiesto.";
         }
        } else {
        cout << "Por favor, ingrese un anio valido.";
    }
    }

