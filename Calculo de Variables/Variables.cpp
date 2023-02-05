#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int a, b, c;
    double d, y;
    
    //Empieza el programa 
    a = 3;
    b = 5;
    c = 8;
    d = -3;
    
    //Se calculan todas las variables en y
    y = a + b * c + 0.5 * d * pow(c,2);
    
    //Se devuelve el resultado y finaliza el programa
    cout<<"El resultado de y es " << y << endl;
    return 0;
}
