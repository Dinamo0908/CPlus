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
    int n, i;
    
    //Empieza el progama, se pide un número
    cin>>n;
    
    //Se empieza a factorizar el número
    i = 2;
    string res = n + " = ";
    while(n != 1) {
        if (n % i == 0) {
            res += i + " ";
            n = (n / i);
        }
        else {
            i++;
        }
    }
    
    //Se devuelve el resultado y finaliza el programa
    cout<<res;
    return 0;
}
