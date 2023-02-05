#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    char abc;
    abc = 'a';
    
    //Se crea un bucle while para indicarle a la variable que imprima las letras del abecedario
    while(abc<='z') {
    cout<<abc++<<endl;
    }

    return 0;
}
