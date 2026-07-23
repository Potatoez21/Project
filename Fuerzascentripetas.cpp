#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main() {

    
    
    double velocidad = 0;
    double masa = 0;
    double radio;

        cout << "resolvedor de velocidades circulares" << endl;

        getch();

        cout << "introduzca los datos actuales (masa(en kilogramos), velocidad(en metros sobre segundo), radio(en metros)) para mostrar los datos" << endl;

        cout << "masa" << endl;

        cin >> masa;

        cout << "velocidad" << endl;

        cin >> velocidad;

        cout << "radio" << endl;

        cin >> radio; 

         do{
            

            cin >> radio;
            cout << "introduzca un radio mayor a 0" << endl;
        }while (radio <= 0);


            double fuerza = masa * pow(velocidad, 2) / radio;
            double velocidadangular = velocidad / radio;
            double aceleracion = pow(velocidad, 2) / radio;

        cout << "Respuestas!" << endl;
        cout << "fuerza centripeta: " << fuerza << endl;
        cout << "velocidad angular: " << velocidadangular << endl;
        cout << "aceleracion: " << aceleracion << endl;    

    return 0;    
    
}
