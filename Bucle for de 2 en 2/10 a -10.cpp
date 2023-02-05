#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declara la variable
    int i;
    
    //Se crea dos bucles for para subir la variable i de dos en dos hasta 10 y bajarlo de dos en dos hasta -10
    for (int i = 0; i < 10; i+=2) {
        cout<<i<<endl;
    }
    
    for (int i = 10; i >= -10; i-=2) {
        cout<<i<<endl;
    }
    
    //Finaliza el programa
    return 0;
}
