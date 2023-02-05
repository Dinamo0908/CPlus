#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    char letra;
    
    //Empieza el programa
    cout<<"Por favor, ingresa una letra: ";
    cin >> letra;
    
    //Se hace un switch case para determinar si lo ingresado es una vocal minúscula
    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': 
        cout << "La letra ingresada es una vocal minuscula"; 
        break;
        default:
         cout << "La letra ingresada no es una vocal minuscula"; 
        break;
    }
    
    //Finaliza el programa 
    return 0;
}
