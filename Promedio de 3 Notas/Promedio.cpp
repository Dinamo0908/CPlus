#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    float a, b, c, promedio = 0;
    
    //Empieza el programa
    cout<<"Por favor, inserte su primera calificacion en la materia: ";
    cin>>a;
    cout<<"Ahora, inserte su segunda calificacion: ";
    cin>>b;
    cout<<"Finalmente, inserte su ultima calificacion: ";
    cin>>c;
    
    //Se suman las variables en "promedio" y se verifica si el resultado es mayor o igual a 70 para devolver un resultado final 
    promedio = a + b + c;
    if (promedio >= 70) {
        cout<<"Usted ha aprobado la materia";
    } else {
        cout<<"Usted no ha aprobado la materia";
    }
    return 0;
}
