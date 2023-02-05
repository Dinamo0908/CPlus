/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
//Se declaran las variables
int numero1, numero2, auxiliar;

//Empieza el programa
cout << "Ingrese un numero, por favor:" << endl;
cin >> numero1;
cout << "Ahora, ingresa un numero mas, por favor:" << endl;
cin >> numero2;

//Se cambian los valores de las variables
auxiliar = numero1;
numero1 = numero2;
numero2 = auxiliar;

//Se dan los resultados y finaliza el programa
cout << "Ahora, el primer numero ingresado es " << numero1 << " ." << endl;
cout << "El segundo numero ingresado es " << numero2 << " ." << endl;
cout << "Eso es todo. Adios!" << endl;
cout << "BOOP - BEEP" << endl;

}
