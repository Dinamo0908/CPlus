#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int i;
    
    //Se crea un bucle for para incrementar la variable i de 0 a 100 de 2 en 2
    for (i = 1; i <= 100; i+=2) {
        cout << i << endl;
    }
    
    //Se crea un espacio para preparar el siguiente bucle
    cout<<" "<<endl;
    
    //Se crea un bucle for para decrecer la variable i de 100 a 0 
    for (i = 100; i>=1; i--) {
        cout << i << endl;
    }
    
    //Finaliza el programa
    return 0;
}
