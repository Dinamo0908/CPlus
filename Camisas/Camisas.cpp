#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
  //Se declaran las variables
  float precio, total, desc, precioFinal;
  int camisas;
  cout << "Por favor, ingrese el precio de una camisa: ";
  cin >> precio;
  cout << "Ahora, ingrese el numero de camisas a comprar: ";
  cin >> camisas;

  //Se aplican los cC!lculos para saber el total, el descuento y el precio precio final 
  total = precio * camisas;
  if (camisas >= 3)
    {
      desc = total * 20 / 100;
      
    }
  else if (camisas < 3)
    {
      desc = total * 10 / 100;
    }
    precioFinal = total - desc;

  //Se da el resultado y finaliza el programa
  cout << "El precio final es $" << precioFinal << ".";
  return 0;
}