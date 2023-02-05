#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int c[45], i, sumaA = 0, sumaB = 0, total;
    
    //Se crea un bucle for para ingresar los valores de las 45 canicas de la primera bolsa
    for(i = 1; i <= 45; i++) {
        cout<<"Por favor, ingrese el valor de la canica numero " << i << ": ";
        cin>>c[i];
        sumaA = sumaA + c[i];
    }
    cout<<"El valor total de las canicas de la bolsa A es igual a " << sumaA << "." << endl;
    
    //Se crea otro bucle for para la bolsa B
    for(i = 1; i <= 45; i++) {
        cout<<"Por favor, ingrese el valor de la canica numero " << i << ": ";
        cin>>c[i];
        sumaB = sumaB + c[i];
    }
    cout<<"El valor total de las canicas de la bolsa A es igual a " << sumaB << "." << endl;
    
    //Se suma el total de los valores de cada bolsa y se devuelve el resultado
    total = sumaA + sumaB;
    cout<<"El total de las dos bolsas es igual a " << total << "." << endl;
    return 0;
}
