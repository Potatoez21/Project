#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand (time(0));

    int secreto = rand() % 100 + 1;

    cout << "estoy pensando un numero del 1 al 100 cual sera? " << endl;

    int intento =0;

    int fallas =0;

    while (intento != secreto && fallas < 10 ) {

        if (!(cin >> intento)) {

            cout << "intenta adivinar! " << endl;

            cout << "solo numeros! " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        fallas++;

        if (intento < secreto) {
            cout << "muy bajo" << endl;

            cout << "intenta de nuevo! " << "intentos = "<< fallas << endl;

        } else if (intento > secreto) {

            cout << "muy alto" << endl;

            cout << "intenta de nuevo! " << "intentos = " << fallas << endl;

        }

        else if (intento == secreto) {

            cout << "\033[1;32m ganaste!\033[0m " << endl;
            cout << "en! " << fallas << " intento(s)" << endl;
            break;
        }

    }

    if (fallas == 10 && intento != secreto) {

        cout << "Perdiste mejor suerte a la proxima... el numero era: " << secreto << endl;
    }
    return 0;
}
