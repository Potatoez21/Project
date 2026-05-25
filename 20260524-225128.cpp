#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cctype>

using namespace std;

bool esNumero(const string& texto) {

    for(char c : texto) {

        if (!isdigit(c)) {

            return false;

        }

    }
    return true;
}


int main() {

    int edad;
    string nombre;

    srand (time(0));

    int Numero = rand() % 9 + 1;



    cout << "Hola! Bienvenido a numero de la suerte,  procede con tu nombre para ver tu número de la suerte :)" << endl;

    while (true) {

        cin >> nombre;

        if(esNumero(nombre)) {

            cout << "Eso es un número, porfavor introduce algo valido" << endl;

        } else {

            break;

        }

    }
    while (true) {

        cout << "Y tu edad porfavor (no preguntes porque)" << endl;

        cin >> edad;

        if (cin.fail()) {

            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Un número porfavor " << endl;

        } else {

            break;

        }
    }


    if (edad == 14) {

        cout << "Texto que borre pq es inadecuado blehh" << endl;

        return 0;
    }

    else {

        cout << "Hola! " << nombre << " Tu número de la suerte hoy  es... " << Numero << endl;

        return 0;

    }

}
