#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numero;
    
    //Empieza el programa
    cout<<"Por favor, ingrese un numero entero: ";
    cin>>numero;
    
    //Se verifica cual fue el número ingresado y se devuelve un resultado
    switch(numero) {
        default:
        cout<<"El numero ingresado es "<< numero << " .";
        break;
        case 2: case 5: case 6: case 8:
        numero = numero * numero;
        cout<<"El cuadrado del numero ingresado es "<< numero << " .";
        break;
        case 3: case 4: case 7: case 9:
        numero = numero * 5;
        cout<<"El numero multiplicado por 5 es igual a "<< numero << ".";
        break;
    }

    return 0;
}
