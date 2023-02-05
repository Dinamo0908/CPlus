#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //Se declaran las variables
    float mujeres, hombres;
    
    //Empieza el programa
    cout<<"En el aula hay 40 personas. 25 son mujeres y 15 son hombres, por tanto...";
    mujeres = 25 * 100 / 40;
    hombres = 15 * 100 / 40;
    
    //Se devuelve el resultado y finaliza el programa
    cout<<"Un "<< mujeres << "% son mujeres y un " << hombres << "% son hombres.";
    return 0;
}
