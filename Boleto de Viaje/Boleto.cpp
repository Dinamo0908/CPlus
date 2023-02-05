#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    float km;
    
    
    //Inicia el programa
    cout<<"Por favor, indique cuantos kilometors se van a recorrer: ";
    cin>>km;
    
    //Se calcula el precio del viaje teniendo en cuenta que cada km son 10.50$, devuelve el resultado y finaliza el programa
    float precio = km * 10.50;
    cout<<"El precio del boleto de viaje es de " << precio << "$.";
    return 0;
}
