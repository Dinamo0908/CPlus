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
    float prestamo, calculo, interes, cuotas;
    
    //Empieza el programa
    cout<<"Ingrese la cantidad de dinero del prestamo del banco: ";
    cin>>prestamo;
    cout<<"Por favor, ingrese el porcentaje de interes del banco: ";
    cin>>interes;
    
    //Se calcula el interes y las cuotas a pagar
    calculo = (interes / 100) * prestamo;
    cuotas = calculo / 12;
    
    //Se devuelven los resultados y finaliza el programa
    cout<<"El monto del interes es de " << calculo << "$.";
    cout<<"El monto de las cuotas anuales es de " << cuotas << "$ cada cuota.";
    return 0;
}
