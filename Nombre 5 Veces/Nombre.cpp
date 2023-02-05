#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    string nombre;
    
    //Empieza el programa
    cout<<"Por favor, escriba su nombre: ";
    cin>>nombre;
    
    //Se crea un bucle for para imprimir el nombre ingresado
    for (int i = 0; i < 5; i++) {
     cout<<nombre<<endl;
    }
    
    //Finaliza el programa
    return 0;
}
