#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    float lunes, miercoles, viernes, promedio;
    
    //Empieza el programa
    cout<<"Por favor, seleccione el tiempo en el que entrena cada uno de los siguientes días en minutos:" << endl;
    cout<<"Lunes: ";
    cin>>lunes;
    cout<<"Miercoles: ";
    cin>>miercoles;
    cout<<"Viernes: ";
    cin>>viernes;
    
    //Se calcula el promedio en minutos y también se lo devuelve en horas
    promedio = (lunes + miercoles + viernes) / 3;
    cout<<"El tiempo promedio de entrenamiento en minutos es de " << promedio << " ." << endl;
    promedio = promedio / 60;
    cout<<"En horas, el promedio es de " << promedio << " horas.";

    return 0;
}
