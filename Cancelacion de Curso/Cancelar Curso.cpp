#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    int precioCurso, cuotaInicial, cuotasMensuales;
    
    //Empieza el programa
    cout<<"Por favor, ingrese el precio del curso: ";
    cin>>precioCurso;
    
    //Se guarda en la variable 'cuotaInicial' el 20% del precio total
    cuotaInicial = precioCurso * 0.20;
    
    //Se calcula el resto de precio a pagar en cuotas mensuales durante dos anios en la variable 'cuotasMensuales'
    cuotasMensuales = (precioCurso - cuotaInicial) / 24;
    
    //Se devuelven los resultados y finaliza el programa
    cout<<"La primera cuota que debera abonar para cancelar el curso sera de " << cuotaInicial << "$." << endl;
    cout<<"El resto de cuotas seran abonadas durante los proximos 24 meses luego de la cuota inicial, siendo un total de " << cuotasMensuales << "$ por cada mes.";
    return 0;
}
