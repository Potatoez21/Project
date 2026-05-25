#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int El;
    double RCN;
    double RCR;
    double P;

    while (true){
    
        cout << "Calculadora. " << endl;
    
        cout << "1: Raíz Cuadrada" << endl;
    
        cout << "2: Raíz Cubica" << endl;
    
        cout << "3: Potenciacion" << endl;
    
        cout << "Seleccione el procedimiento: " << endl;  
        
        if(!(cin >> El)){
        
           cout << "Introduzca una opción valida" << endl;
           
           cin.clear();
           cin.ignore(1000, '\n');
           continue;
        
        }
    
        if (El == 1){
    
            cout << "Introduzca el número a sacar raiz: " << endl; cin >> RCN;
            
                RCR = sqrt(RCN);
                
            cout << "El resultado es: " << RCR << endl;  
            
            break;
            
        }    
        if (El == 2){
        
            cout << "Introduzca el número a sacar raiz: " << endl; cin >> RCN;
         
                RCR = cbrt(RCN);
            
            cout << "El resultado es: " << RCR << endl;   
         break;     
        }
        if (El == 3){
        
            cout << "Introduzca la base: " << endl; cin >> RCN;
            
            cout << "Introduzca la potencia: " << endl; cin >> P;
            
                RCR = pow(RCN, P);
                
            cout << "El resultado es: " << RCR << endl;
            
            break;
        }
        else{
            
            cout << "Introduzca una opción valida"<< endl;
            cout << "" << endl;
        }
    } 
} 



    