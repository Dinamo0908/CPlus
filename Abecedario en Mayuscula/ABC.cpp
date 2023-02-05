#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declara la variable
    char abc;
    abc = 'A';
    
    while(abc <= 'Z') {
        cout << abc++ << endl; 
    }
    
    //Finaliza el programa
    return 0;
}
