#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Se declaran las variables
    int num, indice, numRaiz;
    
    //Empieza el programa
    cout<<"Por favor, ingrese un numero: ";
    cin>>num;
    
    //Se calcula el cuadrado del valor ingresado en la variable 'numero', si es 0, da error
    if (num == 0) {
        cout<<"ERROR. Reingresar número";
    } else {
    numRaiz = sqrt(num);
    cout<<"La raiz cuadrada de " <<num<<" es igual a "<<numRaiz<<".";
    }

    return 0;
}
