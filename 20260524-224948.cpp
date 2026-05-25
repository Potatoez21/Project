#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>

using namespace std;

int main() {


    auto inicio = chrono::high_resolution_clock:: now();


    srand (time(0));

    int Numerouno = rand() % 100 + 1;
    int NumeroDos = rand() % 100 + 1;

    int respuesta = 0;

    int Intentos =0;
    
    chrono:: duration<double> duracion;


    cout << "Vamos a sumar! aver cuanto es... " << Numerouno << " más  " << NumeroDos << endl;

    while (respuesta != Numerouno + NumeroDos && Intentos < 10) {
    
    

        if (!(cin >> respuesta)) {

            cout << "Porfavor solo numeros" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        Intentos++;


        if (respuesta != Numerouno + NumeroDos) {

            cout << "Mal, intenta de nuevo" << " llevas " << Intentos << " intentos" << endl;
        }


        else if (respuesta == Numerouno + NumeroDos) {
        
        
           auto fin = chrono::high_resolution_clock:: now();
           
           chrono:: duration <double> duracion = fin - inicio;

            cout << "Bien hecho! lo lograste en.. " << Intentos << " Intentos!!! " << "y en " << duracion.count() << " segundos" << endl;
            break;
        }

        if (Intentos == 10) {

            cout << "Límite de intentos alcanzados, suerte a la proxima" << " tardaste " << duracion.count() << " segundos " << endl;
        }

    }

    return 0;
}