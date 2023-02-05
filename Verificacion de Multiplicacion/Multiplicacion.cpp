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
    int numero1, numero2, numero3;
    
    //Empieza el programa
    cout << "Por favor, ingresa un numero: ";
    cin >> numero1;
    cout << "Ingresa un segundo numero: ";
    cin >> numero2;
    cout << "Finalmente, ingresa un numero mas: ";
    cin >> numero3;
    
    //Se verifica si la multiplicación de los primeros números ingresados es igual al tercer número
    if (numero1 * numero2 == numero3) {
        cout << "La multiplicacion de los primeros dos numeros es igual al tercer numero ingresado.";
    } else {
        cout << "La multiplicacion de los primeros dos numeros no es igual al tercer numero ingresado.";
    }
    
    //Finaliza el programa
    return 0;
}
