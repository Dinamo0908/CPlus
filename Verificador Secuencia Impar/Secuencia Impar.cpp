#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numero, limite;
    numero = 11;
    
    //Empieza el programa
    cout<<"Por favor, ingrese un numero:";
    cin>>limite;
    
    //Se crea un bucle while para introducir numeros impares desde el 11 hasta el ingresado por el usuario
    while(numero<=limite) {
       cout<<numero<<endl;
       numero+=2;
    }
    
    //Finaliza el programa
    return 0;
}
