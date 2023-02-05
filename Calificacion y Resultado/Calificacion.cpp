#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int calificacion;
    
    //Empieza el programa
    cout<<"Por favor, ingrese la calificacion que obtuvo en la evaluacion (Del 1 al 5): ";
    cin>>calificacion;
    
    //Se crea un switch case con la variable "calificacion" para verificar el número ingresado y devolver un resultado
    switch (calificacion) {
        case 1:
        cout<<"Suspendido";
        break;
        
        case 2:
        cout<<"Mas o menos";
        break;
        
        case 3:
        cout<<"Regular";
        break;
        
        case 4:
        cout<<"Aprobado";
        break;
        
        case 5:
        cout<<"Excelente";
        break;
        
        default:
        cout<<"El dato ingresado esta fuera del rango.";
        break;
    }
    
    
    return 0;
}
