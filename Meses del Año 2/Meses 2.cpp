/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    int dia;
    
    //Inicia el programa
    cout<<"Por favor, ingresa uno de los 1 al 12: ";
    cin>>dia;
    
    //Si el valor ingresado en dia es 1, se le resta 1 al valor para que sea 0
    if (dia == 1) {
        dia = 0;
    }
    
    //Se crea un switch case para devolver los valores
    switch (dia) {
        default:
        cout<<"Por favor, ingrese un valor del 1 al 12.";
        break;
        
        case 0:
        cout << "Enero";
        break;
        
        case 2:
        cout << "Febrero";
        break;
        
        case 3:
        cout << "Marzo";
        break;
        
        case 4:
        cout << "Abril";
        break;
        
        case 5:
        cout << "Mayo";
        break;
        
        case 6:
        cout << "Junio";
        break;
        
        case 7:
        cout << "Julio";
        break;
        
        case 8:
        cout << "Agosto";
        break;
        
        case 9:
        cout << "Septiembre";
        break;
        
        case 10:
        cout << "Octubre";
        break;
        
        case 11:
        cout << "Noviembre";
        break;
        
        case 12:
        cout << "Diciembre";
        break;
    }

    return 0;
}
