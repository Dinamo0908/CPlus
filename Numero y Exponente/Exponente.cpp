#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Se declaran las variables
    int num, exponente, numPotenciado;
    
    //Empieza el programa
    cout<<"Por favor, ingrese un numero: ";
    cin>>num;
    cout<<"Ahora, ingresa un numero para potenciarlo: ";
    cin>>exponente;
    
    //Se calcula el cuadrado del valor ingresado en la variable 'numero', si es 0, da error
    if (num == 0) {
        cout<<"ERROR. Reingresar número";
    } else {
    numPotenciado = pow(num, exponente);
    cout<<num<<" potenciado a la " <<exponente<<" es igual a "<<numPotenciado<<".";
    }

    return 0;
}

