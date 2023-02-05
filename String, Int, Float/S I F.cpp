#include <cstdlib>
#include <iostream>
#include <string>
#include<sstream>  
using namespace std;

int main()
{
    //Se declaran las variables
    string s;
    int i;
    float f;
    
    //Empieza el programa
    cout<<"Por favor, escribe un texto: ";
    cin>>s;
    cout<<"Ahora, escribe un numero: ";
    cin>>i;
    cout<<"Finalmente, escribe un numero con decimales: ";
    cin>>f;
    
    //Se pasa cada variable a un tipo diferente
    int y = atoi(s.c_str());
    cout << "El texto " << s << " en un int es igual a " << y << "." << endl;
    stringstream ii;
    ii<<i;
    string t;
    ii>>t;
    cout << "El numero " << i << " en un string es igual a " << t << "." << endl;
    int fb = (int)f;
    cout << "El numero " << f << " en un int es igual a " << fb << "." << endl;

    return 0;
}
