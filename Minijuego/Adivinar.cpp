#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    //Se declaran las variables
    int numero, respuesta, intentos;
    
    //Empieza el programa 
    srand(time(NULL));
    respuesta = 1 + rand()%(100);
    
    //Se crea un bucle do while para que el usuario intento un numero ilimitado de veces acertar el número
    do {
        cout << "Por favor, ingresa un numero:";
        cin >> numero;
        
        if (numero < respuesta) {
            cout << "\nIntroduci un numero mayor a ese\n";
        } else if (numero > respuesta) {
            cout << "\nIntroduci un numero menor a ese\n";
        }
        intentos++;
    } while (numero != respuesta);
    
    //Una vez acertado, se devuelve el número de intentos y finaliza el programa
    cout << "\nFELICIDADES, ACERTASTE EL NUMERO ;D\n";
    cout << "Numero de intentos: " << intentos << endl;
    cout << "\nAdios!\n";

    return 0;
}
