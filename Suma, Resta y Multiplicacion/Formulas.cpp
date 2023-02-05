#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Se declaran las variables
    float n1, n2, suma, resta, mult;
    
    //Empieza el programa
    cout<<"Por favor, ingrese un numero: ";
    cin>>n1;
    cout<<"Ahora, ingrese otro numero: ";
    cin>>n2;
    
    //Se realiza la suma, resta y multiplicación de los dos números ingresados
    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;
    
    //Se devuelve el resultado y finaliza el programa
    cout<<"La suma de estos dos numeros es " << suma << ", su resta, " << resta << ", y su multiplicacion, " << mult << ".";
    return 0;
}
