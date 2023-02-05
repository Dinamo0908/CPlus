#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    float euro = 0, cantidad = 0, dolar = 1.33450;
    
    //Inicia el programa
    cout<<"Por favor, indique la cantidad de dolar/es a cambiar: ";
    cin>>cantidad;
    
    //Se pasa la cantidad de dolares a euros
    euro = cantidad/dolar;
    
    //Se devuelve el resultado y finaliza el programa
    cout<<"La cantidad de dolares en euro/s es €" << euro <<".";

    return 0;
}
