#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    int num1, num2, num3, verif;
    
    //Empieza el programa
    cout<<"Ingrese un numero: ";
    cin>>num1;
    cout<<"Ingrese otro numero: ";
    cin>>num2;
    cout<<"Ingrese un ultimo numero: ";
    cin>>num3;
    
    //Se verifica si el valor ingresado en la variable 'num2' esta entre 'num1' y 'num3'
    verif = num3 - num1;
    if (verif >= num2) {
        cout<<"El numero "<<num2<<" esta entre "<<num1<<" y "<<num3<<".";
    } else {
        cout<<"El numero "<<num2<<" no esta entre "<<num1<<" y "<<num3<<".";
    }

    return 0;
}
