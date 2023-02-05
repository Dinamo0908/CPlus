#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numero, limite;
    numero = 11;
    
    //Empieza el programa
    cout<<"Por favor, ingrese un numero: ";
    cin>>limite;
    
    //Se crea un bucle for en el que se crea una secuencia desde 11 hasta el número ingresado por el usuario
    for(int i = 11; i <= limite; i+=2) {
        cout<<numero<<endl;
        numero+=2;
    }
    
    //Finaliza el programa
    return 0;
}
