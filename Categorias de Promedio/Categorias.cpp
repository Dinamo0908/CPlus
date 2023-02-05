#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numero1, numero2, promedio;
    
    //Empieza el programa
    cout<<"Para empezar, tenga en cuenta el siguiente rango de caracteres: " << endl;
    cout<<"0 - 5 = Categoria Alfa" << endl;
    cout<<"5 - 10 = Categoria Beta" << endl;
    cout<<"10 - 13 = Categoria Gamma" << endl;
    cout<<"13 - 16 = Categoria Delta" << endl;
    cout<<"16 - 20 = Categoria Epsilon" << endl;
    
    //Se pide que se ingresen dos números y luego se verifican en qué rango se encuentra su promedio
    cout<<"Ahora, ingrese un numero: ";
    cin>>numero1;
    cout<<"Y ahora, ingrese otro: ";
    cin>>numero2;
    promedio = (numero1 + numero2) / 2;
    if (promedio >= 0 && promedio < 5) {
        cout<<"Categoria Alfa";
    } else if (promedio >= 5 && promedio < 10) {
        cout<<"Categoria Beta";
    } else if (promedio >= 10 && promedio < 13) {
        cout<<"Categoria Gamma";
    } else if (promedio >= 13 && promedio < 16) {
        cout<<"Categoria Delta";
    } else if (promedio >= 16 && promedio < 20) {
        cout<<"Categoria Epsilon";
    } 
    
    //Finaliza el programa
    return 0;
}
