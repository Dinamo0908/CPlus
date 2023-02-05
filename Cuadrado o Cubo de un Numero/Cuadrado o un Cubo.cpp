#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    //Se declaran las variables
    char opcion;
    double numero, resultado;
    
    //Se crea un bucle do while para que no finalice el programa hasta que el usuario lo decida
    do {
    //Inicia el programa
    cout<<"Por favor, elige una potencia al cuadrado o al cubo, o salga del programa (Cuadrado = 1, Cubo = 2, Salir = 3): ";
    cin>>opcion;
    
    //Se lee lo ingresado en la variable "opcion" con un switch case y se devuelve un resultado en base a ello
    switch(opcion) {
        case '1':
        cout<<"Por favor, ingrese un numero: ";
        cin>>numero;
        resultado = pow (numero, 2);
        cout<<"El resultado es " << resultado << ".";
        break;
        
        case '2':
        cout<<"Por favor, ingrese un numero: ";
        cin>>numero;
        resultado = pow (numero, 3);
        cout<<"El resultado es " << resultado << ".";
        break;
        
        case '3':
        cout<<"Saliendo...";
        break;
        
        default:
        cout<<"Por favor, ingrese una opcion valida.";
     }
    
    } while (opcion != '3');
    //Finaliza el programa
    return 0;
}
