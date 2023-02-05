#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    float prom1, prom2, prom3, prom4, prom5, promFinal;
    
    //Empieza el programa
    cout<<"Por favor, ingrese una de las 5 calificaciones: ";
    cin>>prom1;
    cout<<"Ahora, ingrese otra nota: ";
    cin>>prom2;
    cout<<"Ingrese la tercer nota: ";
    cin>>prom3;
    cout<<"Ingrese la cuarta nota: ";
    cin>>prom4;
    cout<<"Ingrese su última nota: ";
    cin>>prom5;
    
    //Se suman las notas y se devuelve el resultado
    promFinal = (prom1 + prom2 + prom3 + prom4 + prom5) / 5;
    cout<<"El promedio final es de " << promFinal << "." << endl;
    if (promFinal > 5) {
        cout<<"Ha aprobado la mayoria de las materias.";
    } else {
        cout<<"Ha reprobado la mayoria de las materias";
    }

    return 0;
}
