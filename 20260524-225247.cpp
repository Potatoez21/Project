#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double ctt1;
    double ctt2;
    double H;
    
    
    
    cout << "Calcular hipotenusa, introduzca el primer cateto" << endl;
    
    cin >> ctt1;
    
    cout << "Segundo cateto" << endl;
    
    cin >> ctt2;
    
    H = (sqrt(pow(ctt1, 2)) + (pow(ctt2, 2))); 
    
    cout << "La hipotenusa es: " << H << endl;
    
    
}    
    
    
    
    
    
    
    
    