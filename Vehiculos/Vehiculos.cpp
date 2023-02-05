#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    float km, toneladas, pago;
    char vehiculo;
    
    //Empieza el programa
    cout << "Elija un vehiculo utilizando las letras de cada opcion (a = Auto/Moto, b = Bicicleta, c = Camion): ";
    cin >> vehiculo;
    cout << "Ahora, ingrese los kilometros recorridos: ";
    cin >> km;
    
    //Se crea un switch case para leer el texto ingresado en la variable y calcular el pago de cada vehículo
    switch(vehiculo) {
        case 'a':
        pago = km * 2;
        cout<<"El monto a pagar es de " << pago << " $." << endl;
        break;
        
        case 'b':
        pago = km * 0.5;
        cout<<"El monto a pagar es de " << pago << " $." << endl;
        break;
        
        case 'c':
        cout << "Ingrese las toneladas que se están transportando: ";
        cin >> toneladas;
        toneladas *= 3;
        pago = (km * 5) + toneladas;
        cout<<"El monto a pagar es de " << pago << " $." << endl;
        break;
    }
    return 0;
}
