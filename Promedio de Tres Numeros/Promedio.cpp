#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    float num1, num2, num3, promedio;
    
    //Empieza el programa
    cout<<"Por favor, ingrese el numero 1: ";
    cin>>num1;
    cout<<"Ahora, ingrese el numero 2: ";
    cin>>num2;    
    cout<<"Ingrese un unico numero mas: ";
    cin>>num3;
    
    //Se hace una cuenta para saber cual es el promedio de estos numeros y se devuelve el resultado
    promedio = (num1 + num2 + num3) / 3;
    cout<<"El promedio de estos tres numeros ingresados es "<<promedio<<" ."<<endl;
    
    //Finaliza el programa
    return 0;
}
