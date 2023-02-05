#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    string texto;
    int numero;
    
    //Empieza el programa
    cout<<"Introduce el texto que desees: ";
    cin>>texto;
    cout<<"Ahora, introduce el numero de veces el cual desees que se repita: ";
    cin>>numero;
    
    //Se crea un bucle for que se repite una cantidad de veces determinada por el usuario
    for (int i = 0; i < numero; i++) {
        cout<<texto<<endl;
    }
    
    //Finaliza el programa
    return 0;
}
