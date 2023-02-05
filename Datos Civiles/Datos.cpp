#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    string nombre, sexo, estadoCivil;
    int edad;
    
    //Empieza el programa
    cout<<"Por favor, ingresa tu nombre: ";
    cin>>nombre;
    cout<<"Ahora, ingresa tu sexo (Masculino/Femenino): ";
    cin>>sexo;
    cout<<"Ingresa tu estado civil (Casado, Soltero): ";
    cin>>estadoCivil;
    cout<<"Por ultimo, ingresa tu edad: ";
    cin>>edad;
    
    //Se verifica si los datos ingresados en las variables cumplen con ciertas condiciones o no 
    if (edad < 18 || estadoCivil == "Casado" && sexo == "Masculino") {
        cout<<"USTED NO SE MANDA";
    } else {
        cout<<nombre;
    }
    
    //Finaliza el programa
    return 0;
}
