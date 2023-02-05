#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int num1, num2, num3;
    
    //Empieza el programa
    cout<<"Por favor, ingresa un numero: ";
    cin>>num1;
    cout<<"Ahora, ingresa otro numero: ";
    cin>>num2;
    cout<<"Ingresa un ultimo numero mas: ";
    cin>>num3;
    
    //Se verifican el orden de los numeros a imprimir a traves de bucles if
    if (num1 >= num2) {
        if (num1 >= num3 && num3 > num2) {
            cout << num2 << num3 << num1;
        } else if (num1 < num3) {
            cout << num2 << num1 << num3;
        } else if (num1 > num3 && num3 < num2) {
            cout << num3 << num2 << num1;
        }
    } else if (num1 < num2) {
        if (num2 >= num3 && num3 > num1) {
            cout << num1 << num3 << num2;
        } else if (num2 < num3) {
            cout << num1 << num2 << num3;
        } else if (num2 > num3 && num3 < num1) {
            cout << num3 << num1 << num2;
        } 
    } 

    return 0;
}
