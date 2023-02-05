#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int opcion, faren, celsius;
    
    //Inicia el programa
    cout<<"Elija una opcion entre 1 y 2 (1: Celsius a Farenheit; 2: Farenheit a Celsius): ";
    cin>>opcion; 
    
    //Se crea un switch case y se elije una opción según lo ingresado en la variable anterior
    switch(opcion) {
        
        case 1: 
        cout<<"Por favor, ingrese una temperatura en grados Celsius: ";
        cin>>celsius;
    
        //Se hace un cálculo para pasar el número en "celsius" a Farenheit en la variable "faren"
        faren = (celsius * 9/5) + 32;
    
        //Se devuelve el resultado y finaliza el programa
        cout<< celsius <<"° en grados Farenheit es igual a " << faren << "°F.";
        break;
        
        case 2:
        cout<<"Por favor, ingrese una temperatura en grados Farenheit: ";
        cin>>faren;
    
        //Se hace un cálculo para pasar el número en "faren" a Celsius en la variable "celsius"
        celsius = (faren - 32) * 5/9;
    
        //Se devuelve el resultado y finaliza el programa
        cout<< faren <<"°F en grados Celsius es igual a " << celsius << "°.";
        break;
    }
    
    return 0;
}


