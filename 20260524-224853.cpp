#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand (time(0));

    int Elección;
    int Intentos1 = rand()% 100 + 1;
    int Intentos2 = rand() % 100 + 1;
    int Intentos3 = rand() % 50 + 1;

    int fallos1;
    int fallos2;
    int fallos3;

    int Normal;
    int Facil;
    int Dificil;

    cout << "Porfavor introduzca la dificultad deseada 1- Dificil 2- Normal 3- Facil" << endl;

    while (Elección != 4 && Intentos1 < 5 && Intentos2 < 10 && Intentos3 < 15) {

        if (!(cin >> Elección)) {

            cout << "Elija una opción valida" << endl;

            cin.clear();
            cin.ignore (1000, '\n');
            continue;
        }
    }

    if (Elección == 1) {

        cout << "Adivine un numero del 1 al 100" << endl;

        while (fallos1 < 5) {

            if (!(cin >> Dificil)) {

                cout << "Porfavor introduzca solo numeros" << endl;

                cin.clear();
                cin.ignore (1000, '\n');
                continue;
            }

            fallos1++;

            cin >> Dificil;

            if (Dificil < Intentos1) {

                cout << "Muy bajo intenta de nuevo" << endl;
            }
            else if (Dificil > Intentos1) {

                cout << "Muy alto,intenta de nuevo" << endl;
            }

            else if (Dificil == Intentos1) {

                cout << "Bien hecho !" << endl;
                break;
            }
            else {

                cout << "Límite de intentos alcanzados Suerte a la proxima" << endl;
            }
        }
    }

    if (Elección == 2) {

        cout << "Adivine un numero del 1 al 100" << endl;

        while (fallos2 < 10) {

            if (!(cin >> Normal)) {

                cout << "Porfavor introduzca solo numeros" << endl;

                cin.clear();
                cin.ignore (1000, '\n');
                continue;

            }
            if (Normal < Intentos2) {

                cout << "Muy bajo,intenta de nuevo" << endl;
            }

            else if (Normal > Intentos2) {

                cout << "Muy alto,intenta de nuevo" << endl;
            }

            else if (Normal == Intentos2) {

                cout << "Bien hecho,adivinaste el numero" << endl;
            }
            break;
            else {

                cout << "Límite de intentos alcanzados, suerte a la proxima" << endl;
            }
        }
    }
    for (Elección == 3) {

        cout << "Adivina un número del 1 al 50" << endl;

        while (fallos3 < 15) {

            if (!(cin >> Facil)) {

                cout << "Porfavor introduzca solo numeros" << endl;

                cin.clear();
                cin.ignore (1000, '\n');
                continue;
            }

            if (Facil < Intentos3) {

                cout << "Muy bajo ,intenta de nuevo " << endl;
            }

            else if (Facil > Intentos3) {

                cout << "Muy alto, intenta de nuevo" << endl;
            }

            else if (Facil == Intentos3) {

                cout << "Ganaste!,bien hecho" << endl;
            }
            break;
            else {

                cout << "Límite de intentos alcanzados Suerte a la proxima " << endl;
            }
        }
    }

    if (Elección == 4) {

        cout << "Juego cancelado" << endl;

    }
    return 0
}









