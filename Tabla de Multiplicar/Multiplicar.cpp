/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    int num;
    
    //Empieza el programa
    cout<<"Por favor, ingrese un numero del 0 al 10: ";
    cin>>num;
    
    //Se crea un bucle while para mostrar la tabla de multiplicacion de ese numero del 0 al 10
    int i = 0;
    while ((num >= 0 && num <= 10) && (i>= 0 && i <= 10)) {
        for (i; i <= 10; i++) {
        cout<<num<<" x "<<i<<" = "<<num * i<<endl;
        }
    }
    return 0;
}
