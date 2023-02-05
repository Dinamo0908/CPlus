#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int i, valor[50], prom = 0;
    
    //Se crea un bucle for para introducir 50 valores y almacenarlos en un array en el que se verificarán los valores mayores
    for (i = 1; i <= 50; i++) {
    cout<<"Por favor, ingrese el valor numero " << i << " :";
    cin>>valor[i];
    if (valor[i] > 50) {
        prom = prom + 1;
     }
    }
    
    //Se devuelven los promedios mayores
    cout<<"Los promedios mayores a 50 son: " << endl;
    for (i = 1; i <= 50; i++) {
        if(valor[i] > 50) {
            cout<< valor[i] << endl;
        }
    }

    return 0;
}
