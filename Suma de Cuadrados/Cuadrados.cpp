#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
//Se declaran las variables
int suma = 0, cuadrado;

//Empieza el programa
for (int i = 1; i <= 10; i++) {
    cuadrado = i * i;
    suma += cuadrado;
    cout << "Calculando..." << endl;
  }
  
  //Se devuelve el resultado y finaliza el programa
  cout << "El resultado de la suma de los cuadrados del 1 al 10 es " << suma << "." << endl;
  return 0;
}
