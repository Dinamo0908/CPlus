#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Se declaran las variables
    char letras1[] = {'a', 'b', 'c', 'd', 'e'};
    char letras2[] = {'f', 'g', 'h', 'i', 'j'};
    char letras3[10];
    
    //Empieza el programa, se copian los elementos del array letras1 al array letras3
    for (int i = 0; i < 5; i++) {
        letras3[i] = letras1[i];
    }
    
    //Se crea un segundo bucle para copiar los elementos del array letras2 al array letras3
    for (int i = 5; i < 10; i++) {
        letras3[i] = letras2[i - 5];
    }
    
    //Se deveuelve el resultado y finaliza el programa
    for (int i = 0; i < 10; i++) {
    cout << letras3[i] << endl;
    }

    return 0;
}
