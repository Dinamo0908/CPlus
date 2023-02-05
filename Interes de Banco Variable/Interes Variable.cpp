#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    float prestamo, calculo = 0, total;
    
    
    //Inicia el programa
    cout<<"Por favor, ingresa el prestamo recibido del banco: $";
    cin>>prestamo;
    
    //Se calcula el interes teniendo en cuenta que es un 27% del prestamo recibido y se calcula el precio final
    calculo = (27 * prestamo) / 100;
    total = prestamo + calculo;
    
    //Se devuelve el resultado y finaliza el programa
    cout<<"El debera pagar de interes $" << calculo <<", siendo un total de $" << total <<".";
    return 0;
}