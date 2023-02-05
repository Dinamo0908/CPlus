#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numero;
    
    //Empieza el programa
    cout<<"Por favor, introduce un numero: ";
    cin>>numero;
    
    //Se crea un bucle for para escribir todos los números que hay hasta el que escribió el usuario
    for(int i = 0; i < numero; i++) {
        cout<< i <<endl;
    }
    
    //Finaliza el programa
    return 0;
}
