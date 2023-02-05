#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    int saldoInicial = 1000, opcion;
    float extra, saldo = 0, retiro;
    
    //Empieza el programa
    cout << "Bienvenido al cajero virtual" << endl;
    cout << "Actualmente, tienes " << saldoInicial << "$ en tu cuenta" << endl;
    cout << "Tienes tres opciones:" << endl;
    cout << "1: Ingresar dinero" << endl;
    cout << "2: Retirar dinero" << endl;
    cout << "3: Salir" << endl;
    cout << "Elige: (Ingresa un numero)" << endl;
    cin >> opcion;
    
    //Según la opción ingresada, se devuelven 3 resultados distintos
    switch (opcion) {
        case 1:
        cout << "Por favor, ingrese la cantidad de dinero a ingresar" << endl;
        cin >> extra;
        saldo = saldoInicial + extra;
        cout << "Dinero actual: " << saldo << "$." << endl;
        break;
        
        case 2: 
        cout << "Por favor, ingrese la cantidad de dinero a retirar" << endl;
        cin >> retiro;
        saldo = saldoInicial - retiro;
        if (retiro > saldoInicial) {
            cout << "No puedes retirar esa cantidad de dinero." << endl;
        } else {
            cout << "Dinero actual: " << saldo << "$." << endl;
            break;
        }
        
        case 3:
        break;
    }
    
    return 0;
}
