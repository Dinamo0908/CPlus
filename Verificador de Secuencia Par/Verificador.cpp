#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //Se declaran las variables
    int i, limite;
    i = 2;
    //Se pide ingresar un numero par. De no ser así, se cerrará el programa
    cout<<"Por favor, ingrese un numero par: ";
    cin>>limite;
    if (limite%2==0) {
        for (i = 0; i <= limite; i++) {
            cout<<i<<endl;
        }
    } else {
        cout<<"Por favor, verifique que el numero ingresado sea par.";
    }
    
    //Finaliza el programa
    return 0;
}
