#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    bool p, q, bicond;
    bicond = false;
    p = true;
    q = true;
    
    //Empieza el programa
    bicond = (!p || q) && (!q || p);
    cout<< p << " <=> " << q << " = " << bicond << endl;
    p = true;
    q = false;
    bicond = (!p || q) && (!q || p);
    cout<< p << " <=> " << q << " = " << bicond << endl;
    p = false;
    q = true;
    bicond = (!p || q) && (!q || p);
    cout<< p << " <=> " << q << " = " << bicond << endl;
    p = false;
    q = false;
    bicond = (!p || q) && (!q || p);
    cout<< p << " <=> " << q << " = " << bicond << endl;
    
    //Finaliza el programa
    return 0;
}
