#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    char zyx;
    zyx = 'Z';
    
    //Se crea un bucle for para crear un abecedario en mayúscula pero en reversa
    while(zyx >= 'A') {
        cout<<zyx--<<endl;
    }
    
    //Finaliza el programa
    return 0;
}
