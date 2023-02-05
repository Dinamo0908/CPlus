#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Se declaran las variables
    float n1, n2;
    
    //Se piden dos números
    cout << "\nIntroduzca un numero: ";
    cin >> n1 ;
    cout << "\nIntroduzca otro numero: ";
    cin >> n2;
    
    //Se hacen los cálculos y finaliza el programa
    cout << fixed << setprecision(2);
    cout << "Su suma es " << n1 + n2 << endl;
    cout << "Su resta es " << n1 - n2 << endl;
    cout << "Su multiplicacion es " << n1 * n2 << endl;
    cout << "Su division es " << n1 / n2 << endl;
    cout << "Eso es todo. Adios!" << endl;
    
}