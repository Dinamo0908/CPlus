/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
//Se declaran las variables
int numero, raiz;

//Empieza el programa
cout << "Por favor, ingrese un numero: ";
cin >> numero;
raiz = cbrt(numero);
cout << "La raiz cuadrada del numero " << numero << " es " << raiz << "." << endl;
}

