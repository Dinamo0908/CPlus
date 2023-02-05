#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    float km;
    float precio;
    float precioFinal;
    
    //Inicia el programa
    cout<<"Por favor, indique cuantos kilometros se van a recorrer: ";
    cin>>km;
    cout<<"Por favor, indique el precio a pagar por cada km recorrido: ";
    cin>>precio;
    
    //Se calcula el precio del viaje teniendo en cuenta que cada km son el valor asignado en 'precio', devuelve el resultado y finaliza el programa
    precioFinal = km * precio;
    cout<<"El precio del boleto de viaje es de " << precioFinal << "$.";
    return 0;
}
