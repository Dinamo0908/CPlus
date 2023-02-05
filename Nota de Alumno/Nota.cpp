#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    float notaPractica, notaTeorica, notaParticipacion, notaFinal;
    
    //Empieza el programa
    cout<<"Por favor, introduzca el valor de la nota practica: ";
    cin >> notaPractica;
    cout<<"Por favor, introduzca el valor de la nota teorica: ";
    cin >> notaTeorica;
    cout<<"Finalmente, introduzca el valor de la nota de participacion: ";
    cin >> notaParticipacion;
    
    //Se calcula la nota final y se devuelve el resultado
    notaPractica *= 0.30;
    notaTeorica *= 0.60;
    notaParticipacion *= 0.10;
    notaFinal = notaPractica + notaTeorica + notaParticipacion;
    cout << "La nota final es " << notaFinal << " ." << endl; 
    if (notaFinal > 5) {
        cout << "Felicidades amigo, aprobaste. Ahora, comprame los 100 caramelos que me prometiste si te ayudaba durante las pruebas :)" << endl; 
        cout << "FIN";
    } else {
        cout << "Chabon, te ayude durante todas las pruebas y aun asi no aprobaste? Bueno, yo quiero mis caramelos igual eh |:(" << endl; 
         cout << "FIN";
    }

    return 0;
}
