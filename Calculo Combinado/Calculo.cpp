#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int w, x, y, z;
    double m;
    
    //Inicia el programa
    w = 3;
    x = 1;
    y = 5;
    z = 2;
    
    //Se hace un cálculo y se guarda el resultado en la variable m
    m = (pow(w,2) - pow (x, 2)) / (2 * (y - z));
    
    //Se devuelve el resultado y finaliza el programa
    cout<<"El valor de la variable m es " << m << endl;
    return 0;
}
