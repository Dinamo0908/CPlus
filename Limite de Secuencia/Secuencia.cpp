#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //Se declaran las variables
    int numero = 0, limite;

    //Empieza el programa
    cout<<"Introduzca el limite de numeros el cual desea que se imprima en pantalla: ";
    cin>>limite;
    
    //Se crea un bucle while para imprimir todos los números anteriores al límite establecido
    while(numero <= limite) {
        cout<<numero<<endl;
        numero++;
    }
    
    //Finaliza el programa
    return 0;
}
