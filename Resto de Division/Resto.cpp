#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    int divisor, dividendo, resto;
    
    //Inicia el programa
    cout<<"Por favor, ingrese el divisor de esta operacion (division): ";
    cin>>divisor;
    cout<<"Ahora, ingrese el numero a dividir (dividendo): ";
    cin>>dividendo;
    
    //Se calcula el resto de la operacion matematica con numeros enteros
    resto = dividendo % divisor;
    
    //Se devuelve el resultado y finaliza el programa
    cout<<"El resto de " << dividendo << " dividido por " << divisor << " es igual a " << resto << ".";
    return 0;
}
