#include <iostream>
#include <string>

using namespace std;

int main() {
    //Se declaran las variables
    string nombre;
    
    //Empieza el programa
    cout << "Hola! Como te llamas?";
    cin >> nombre << endl;
    cout << nombre << ", un bonito nombre." << endl;
    cout << "Que tengas un muy buen dia, " << nombre << " !" << endl;
}