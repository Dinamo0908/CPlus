#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numero = 2;
    int pendiente = 1;
    
    //Empieza el programa
    for (int i = 0; i < 101; i++) {
    i+=pendiente;
    cout<<numero<<endl;    
    pendiente+=2;
    numero+=pendiente;
    }

    return 0;
}
