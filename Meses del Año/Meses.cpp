#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numero;
    
    //Empieza el programa
    cout<<"Por favor, ingrese un numero: ";
    cin>>numero;
    
    //Se verifica cual es el número ingresado y, en base a eso, se devuelve uno de los meses del año
    switch (numero) {
        default:
        cout<<"Por favor, ingrese un numero del 1 al 12.";
        break;
        case 1:
        cout<<"Enero";
        break;
        case 2:
        cout<<"Febrero";
        break;
        case 3:
        cout<<"Marzo";
        break;
        case 4:
        cout<<"Abril";
        break;
        case 5:
        cout<<"Mayo";
        break;
        case 6:
        cout<<"Junio";
        break;
        case 7:
        cout<<"Julio";
        break;
        case 8:
        cout<<"Agosto";
        break;
        case 9:
        cout<<"Septiembre";
        break;
        case 10:
        cout<<"Octubre";
        break;
        case 11:
        cout<<"Noviembre";
        break;
        case 12:
        cout<<"Diciembre";
        break;
    }
    
    //Finaliza el programa
    return 0;
}
