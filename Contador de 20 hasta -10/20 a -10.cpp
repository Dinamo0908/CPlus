#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int num = 20, i;
    
    //Se crea un bucle for para hacer un contador de 20 hasta -10
    for (i = 20; i >= -10; i -= 6) {
    num = i;
    cout<<num<<endl;
    }

    return 0;
}
