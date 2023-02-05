#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //Se declaran las variables
    float n1, n2, resultado, n3;
    
    //Empieza el programa
    cout<<"Por favor, ingrese un numero: ";
    cin>>n1;
    cout<<"Ingrese otro numero más: ";
    cin>>n2;
    cout<<"Ingrese un último numero: ";
    cin>>n3;
    
    //Se realiza la multiplicación de los dos primeros valores ingresados
    resultado = n1 * n2;
    
    //Se chequea si el resultado de la multiplicación es igual al tercer valor ingresado, y se devuelve un resultado en base a ello
    if (n3 == resultado) {
        cout<<"El tercer numero ingresado es igual a la multiplicacion de los otros dos numeros ingresados."<<endl;
    } else {
        cout<<"El tercer numero ingresado no es igual a la multiplicacion de los otros dos numeros ingresados."<<endl;
    }
    
    //Finaliza el programa
    return 0;
}
