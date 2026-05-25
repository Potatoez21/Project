#include <iostream>
using namespace std;
int main() {

 int pasos;
 
  cout << "Como hacer un pan con mantequilla y jalea" << endl;
  
 while (pasos !=7) {
 
 if (!(cin >> pasos)){
 
 cout << "porfavor intrduzca el número de paso que desee" << endl;
 
 cin.clear();
 cin.ignore (1000, '\n');
 continue;
} 

if (pasos == 1){
 
 cout << "Paso 1- Conseguir pan " << endl;
 }
 else if (pasos == 2){
 
 cout << "Paso 2- Poner el pan las rodajas en una superficie limpia y apta para untar " << endl;
 }
 else if (pasos == 3){
 
 cout << "Paso 3- Conseguir jalea y un cuchillo para untar" << endl;
 } 
 
 else if (pasos == 4){
 
 cout << "Paso 4- poner jalea/mantequilla en el cuchillo para untar y untarlo sobre el pan" << endl;
 } 
 else if (pasos == 5) {
 
 cout << "Paso 5- Cerrar el pan untado " << endl;
 } 
 
 else if (pasos == 6) {
 
 cout << "Paso 6- Disfrutar! " << endl;
 } 
 else if (pasos == 7) {
 
 cout << "Pan untado completo.... termonando programa... " << endl;
 } 
 else {
 
 cout << "Ese paso no existe, porfavor introduzca del 1 al 6" << endl;
 } 

} 
return 0;
} 

