#include <iostream>
#include <conio.h>
void tabla();
using namespace std;

int main()
{
    //Se llama a la función tabla
    tabla();
    return 0;
}
    //Se crea una función para crear una tabla de multiplicación
 void tabla() {
    int numero, i;
    do {
    cout<<"Por favor, ingrese un numero del 0 al 10" << endl;
    cin >> numero;
  } while ((numero < 0) || (numero > 10));
  
  for (int i = 0; i < 10; i++) {
      cout << numero << " x " << i << " = " << numero * i << endl;
  }
  cout << "\n\n";
    }


