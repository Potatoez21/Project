#include <iostream>
#include <string>

using namespace std;

int main() {

int menu =0;

cout << "Porfavor escoja lo que desee" << endl;

cout << "\n=============\n\n";

cout << "1.- Comida 🍽️" << endl;

cout << "\n=============\n\n";

cout << "2.- Bebidas 🍹" << endl;

cout << "\n=============\n\n";


while (menu !=4) {

if (!(cin >> menu)) {

cout << "Escoja una opcion válida 🫠" << endl;

cin.clear();
cin.ignore(1000, '\n');
continue;
} 

if (menu == 1) {

cout << "Jugo" << endl;
 
} else if (menu == 2) {

cout << "Comida" << endl;
 

} else if (menu == 3) {

cout << "no wey 3 no" << endl;

} else if (menu == 4) {
cout << "Saliendo del menú! " << endl;
 
}
} 
return 0;
}
    