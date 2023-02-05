#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Se declaran las variables
    int num, numCuadrado;
    
    //Empieza el programa
    cout<<"Por favor, ingrese un número: ";
    cin>>num;
    
    //Se calcula el cuadrado del valor ingresado en la variable 'numero', si es 0, da error
    if (num == 0) {
        cout<<"ERROR. Reingresar número";
    } else {
    numCuadrado = pow(num, 2);
    cout<<"El cuadrado de "<<num<<" es "<<numCuadrado<<".";
    }

    return 0;
}
