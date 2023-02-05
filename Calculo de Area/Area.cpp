#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    double a, b, Area;
    int figura;
    
    //Empieza el programa 
    cout << "Por favor, elija un cuadrado (1), un triángulo (2) o un rectángulo (3), escribiendo su respectivo numero: ";
    cin >> figura;
    
    if (figura == 1) {
    cout<<"Valor del lado: ";
    cin >> a;
    Area = a*a;
    } else if (figura == 2) {
    cout<<"Valor del lado mayor: ";
    cin >> a;
    cout<<"Valor del lado menor: ";
    cin >> b;
    Area = a*b;
    }  else if (figura == 3) {
    cout<<"Valor de la base: ";
    cin >> a;
    cout<<"Valor de la altura: ";
    cin >> b;
    Area = a*b / 2.0;
    } else {
        cout << "El numero o caracter ingresado no es correcto. Por favor, intentelo de vuelta." << endl;
        Area = 0;
    }
    cout << "El area es igual a " << Area << endl;

    return 0;
}
