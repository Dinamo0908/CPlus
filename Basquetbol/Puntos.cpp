#include <iostream>
#include  <conio.h>

using namespace std;
void puntos(int, int);

int main()
{
    //Se declaran las variables
    int punt1, punt2;
    
    //Empieza el programa
    cout<<"Por favor, ingresa la cantidad de punteros de 2 puntos conseguidos: ";
    cin>>punt1;
    cout<<"Por favor, ingresa la cantidad de punteros de 3 puntos conseguidos: ";
    cin>>punt2;
    puntos(punt1, punt2);
    return 0;
}
    
    //Se crea una función para calcular el puntaje conseguido
    void puntos(int x, int y) {
        int total;
        total = (x * 2) + (y * 3);
        cout<<"El total de puntaje conseguido es: " << total << ".";
    }