#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    double cm, pulg, km, m, medida;
    char unidad;
    
    //Empieza el programa
    cout<<"Por favor, escribe una medida: ";
    cin>>medida;
    cout<<"Ahora, escribe la unidad de dicha medida (cm = 1/pulg = 2/km = 3): ";
    cin>>unidad; 
    
    //Se crea un switch case para leer la variable ingresada y devolver un resultado en base a ello
    switch(unidad) {
        case '1':
        m = medida/100;
        cout<<"La medida en metros es " << m;
        break;
        
        case '2':
        m = medida/39.37;
        cout<<"La medida en metros es " << m;
        break;
        
        case '3':
        m = medida * 1000;
        cout<<"La medida en metros es " << m;
        break;
    }
    
    //Finaliza el programa
    return 0;
}
