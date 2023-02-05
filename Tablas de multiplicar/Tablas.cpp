#include <iostream>

using namespace std;

int main()
{
//Se declaran las variables
int numero;

//Empieza el programa
do {
    cout<<"Por favor, ingrese un numero del 0 al 10" << endl;
    cin >> numero;
  } while ((numero < 0) || (numero > 10));
  
  for (int i = 0; i < 21; i++) {
      cout << numero << " x " << i << " = " << numero * i << endl;
  }
  
  cout << "\n\n";
  return 0;
}
