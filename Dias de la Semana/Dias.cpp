#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    int numeroDia;
    
    //Empieza el programa
    cout<<"Por favor, ingrese un numero del 1 al 7: ";
    cin>>numeroDia;
    
    //Se crea un switch case para verificar cual es el valor ingresado en la variable 'numeroDia' y se devuelve un resultado en base a ello
    switch(numeroDia) {
        default:
        cout<<"Por favor, ingrese un numero correcto.";
        break;
        
        case 1: 
        cout<<"Segun el numero ingresado (" << numeroDia << ") el dia en la semana de este es domingo.";
        break;
        
        case 2:
        cout<<"Segun el numero ingresado (" << numeroDia << ") el dia en la semana de este es lunes.";
        break;
        
        case 3:
        cout<<"Segun el numero ingresado (" << numeroDia << ") el dia en la semana de este es martes.";
        break;
        
        case 4:
        cout<<"Segun el numero ingresado (" << numeroDia << ") el dia en la semana de este es miercoles.";
        break;
        
        case 5:
        cout<<"Segun el numero ingresado (" << numeroDia << ") el dia en la semana de este es jueves.";
        break;
        
        case 6:
        cout<<"Segun el numero ingresado (" << numeroDia << ") el dia en la semana de este es viernes.";
        break;
        
        case 7:
        cout<<"Segun el numero ingresado (" << numeroDia << ") el dia en la semana de este es sabado.";
        break;
    }
    return 0;
}
