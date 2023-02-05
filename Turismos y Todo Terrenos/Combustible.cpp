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
    int turismos, todoTerrenos, capTurismos, capTerrenos, combustible;
    
    //Inicia el programa, se pregunta la cantidad de cada tipo de vehículo
    cout<<"Por favor, ingresa la cantidad de turismos: ";
    cin>>turismos;
    cout<<"Por favor, ingresa la cantidad de todo terrenos: ";
    cin>>todoTerrenos;
    
    //Se pregunta la capacidad de combustible de los vehículos
    cout<<"Por favor, ingresa la capacidad de combustible de los turismos: ";
    cin>>capTurismos;
    cout<<"Por favor, ingresa la capacidad de combustible de los todo terrenos: ";
    cin>>capTerrenos;
    
    //Se calcula la cantidad de combustible requerido
    combustible = capTurismos * turismos + capTerrenos * todoTerrenos;
    
    //Se devuelven los resultados y finaliza el programa
    cout<<"La cantidad de combustible requerido para los turismos y los todo terrenos es de " << combustible << "l.";
    return 0;
}
