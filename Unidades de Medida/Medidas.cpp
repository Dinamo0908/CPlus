#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int opcion;
    float pie, yardas, pulg, cent, metros;
    
    //Empieza el programa 
    cout<<"Por favor, introduce una cantidad de pies (unidad de medida): ";
    cin>>pie;
    cout<<"Ahora, elige una opcion para pasar esta medida a otra unidad (1 = yardas, 2 = pulgadas, 3 = centimetros, 4 = metros): ";
    cin>>opcion;
    
    //Se crea un switch case para leer lo ingresado en la variable "opcion" y se pasa lo ingresado en "pie" a una diferente unidad de medida
    switch(opcion) {
       case 1:
       yardas = pie / 3;
       cout<< pie << " en yardas es " << yardas <<".";
       break;
       
       case 2:
       pulg = pie * 12;
       cout<< pie << " en pulgadas es " << pulg <<".";
       break;
       
       case 3:
       cent = pie * 30.48;
       cout<< pie << " en centimetros es " << cent <<".";
       break;
       
       case 4:
       metros = pie / 3.281;
       cout<< pie << " en metros es " << metros <<".";
       break;
    }

    return 0;
}
