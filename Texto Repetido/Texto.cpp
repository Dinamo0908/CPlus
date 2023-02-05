#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int repet, i;
    string texto;
    
    //Empieza el programa
    cout<<"Ingresa un texto, por favor: ";
    cin>>texto;
    cout<<"Ahora, ingresa el numero de repeticiones del texto: ";
    cin>>repet;
    
    //Se crea un bucle for para repetir el texto ingresado en "texto" la cantidad de veces declarada en "repet"
    for (i = 1; i <= repet; i++) {
        cout<<texto<<endl;
    }

    return 0;
}