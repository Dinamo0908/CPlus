#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    char letras = 'Z';
    
    //Empieza el programa
    while(letras>='A') {
        cout << letras-- << endl;
    }
    
    //Finaliza el programa
    return 0;
}
