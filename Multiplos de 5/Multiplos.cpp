#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    int mult, i;
    float suMult, proMult;
    i = 0;
    mult = 0;
    suMult = 0;
    proMult = 0;
    
    //Empieza el programa
    while (mult < 50) {
      i++;
      mult = 5 * i; 
      cout<<mult<<endl;
      suMult = suMult + mult;
      proMult = suMult / i;
    }
    
    //Se devuelve el resultado y finaliza el programa
    cout<<"La suma de los primeros diez multiplos de 5 es igual a " << suMult << "." << endl;
    cout<<"El promedio de los primeros diez multiplos de 5 es igual a " << proMult << ".";
    return 0;
}
