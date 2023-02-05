#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int i;
    char bucle;
    
    //Empieza el programa
    cout<<"Por favor, seleccione una opcion entre un bucle While o un bucle For para escribir todos los numeros pares entre el 1 y el 20. (While = w For = f): ";
    cin>>bucle;
    
    //Se crea un switch case para leer la variable "bucle" y devolver un bucle for o while en base a lo ingresado
    switch (bucle) {
        case 'w':
        while (i <= 20) {
            if (i%2==0) {
                cout<<i<<endl;
                i+=2;
            }
        }
        break;
        
        case 'f':
        for(i = 0; i <= 20; i+=2) {
            if (i%2==0) {
                cout<<i<<endl;
            }
        }
        break;
        
        default:
        cout<<"Por favor, ingrese una opcion valida.";
    }

    return 0;
}
