#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    float calculo = 0, total;
    
    
    //Inicia el programa
    calculo = (27 * 10000) / 100;
    total = 10000 + calculo;
    
    
    //Se devuelve el resultado y finaliza el programa
    cout<<"El debera pagar de interes " << calculo <<"$, siendo un total de " << total <<"$.";
    return 0;
}
