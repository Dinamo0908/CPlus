#include <iostream>
#include <conio.h>

using namespace std;
void suma(int, int);
int main()
{
    //Se declaran las variables
    int num1, num2;
    
    //Empieza el programa
    cout<<"Por favor, ingrese un numero: ";
    cin>>num1;
    cout<<"Ahora, ingrese otro numero: ";
    cin>>num2;
    suma(num1, num2);
    return 0;
}
    //Se crea una funcion para sumar dos variables
    void suma(int x, int y) {
        int s;
        s = x + y;
        cout<<"La suma de estos dos numeros es " << s << endl;
    }
