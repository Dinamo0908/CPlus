#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int lado, base, opcion, perim;
    
    //Empieza el programa
    cout<<"Por favor, escribe la medida de los lados de un triangulo: ";
    cin>>lado;
    cout<<"Ahora, escribe la medida de la base del triangulo: ";
    cin>>base;
    cout<<"Finalmente, escribe el tipo de triangulo que es (1 = Equilatero, 2 = Isosceles, 3 = Escaleno): ";
    cin>>opcion;
    
    //Se lee lo ingresado en la variable "opcion" y se devuelve un resultado en base a ello
    switch (opcion) {
        case 1:
        perim = lado*3;
        cout<<"El perimetro de ese triangulo es " << perim << ".";
        break;
        case 2:
        perim = base + (2 * lado);
        cout<<"El perimetro de ese triangulo es " << perim << ".";
        break;
        case 3:
        perim = lado + (lado + 1) + (lado + 2);
        cout<<"El perimetro de ese triangulo es " << perim << ".";
        break;
        default:
        cout<<"Por favor, ingrese una opcion valida.";
    }
    
    //Finaliza el programa
    return 0;
}
