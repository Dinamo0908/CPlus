# include <iostream>
# include <iomanip>
# include <cmath>

using namespace std;

int main(void) {
    //Se declaran las variables
    const float PI = 3.1416;
    float radio;

    //Empieza el programa
    cout << "Por favor, introduce el valor del radio de un esfera: ";
    cin >> radio;
    cout << "\n Longitud de la circunferecnia: " << fixed << setprecision(2) << 2 * PI *  radio;
    cout << "\n Area del circulo: " << PI * pow(radio,2);
    cout << "\n Volumen de la esfera: " << (4.0/3) * PI * pow(radio, 3) << endl;
    system("pause");
}
