#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    int edad;
    double altura;
    string nombre, sexo;
    
    //Empieza el programa
    cout<<"Por favor, ingrese su nombre:";
    cin >> nombre;
    cout<<"Ahora, ingrese su sexo:";
    cin >> sexo;
    cout<<"Ingrese su altura:";
    cin >> altura;
    cout<<"Finalmente, ingrese su edad:";
    cin >> edad;
    
    //Se devuelve el resultado y finaliza el programa
    cout << "Nombre: " << nombre << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << endl;
    cout << "Edad: " << edad << endl;
    
    return 0;
}
