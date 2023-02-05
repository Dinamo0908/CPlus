#include <iostream>

using namespace std;

bool reverse(bool);
int main()
{
    //Se declaran las variables
    int opcion;
    bool boolean;
    cout<<"Por favor, elige si una variable es verdadera o falsa (0 = verdadero, 1 = falsa): ";
    cin>>opcion;
    if (opcion == 0) {
        boolean = true;
    } else if (opcion == 1)  {
        boolean = false;
    } else {
        cout<<"Por favor, ingresa una opcion valida.";
    }
    reverse(boolean);
    cout<<boolean;
    return 0;
}

    //Se crea una funcion para cambiar de verdadero a falso o viceversa a un booleano
    bool reverse(bool x) {
        return !x;
    }
