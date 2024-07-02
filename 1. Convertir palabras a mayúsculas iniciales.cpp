#include <iostream>
#include <cctype>

using namespace std;

void PonerMayusculasIniciales(char cadena[]) {
    int n = 0;
    while (cadena[n] != '\0') {
        n++;
    }
    
    cadena[0] = toupper(cadena[0]);
    
    for (int i = 1; i < n; i++) {
        if (cadena[i - 1] == ' ') {
            cadena[i] = toupper(cadena[i]);
        }
    }
}

int main(){
    char cadena[100]; 
    
    cout<<"Ingrese la oracion a transformar: ";
    cin.getline(cadena, 100); 
    
    cout<<"Texto original: "<<cadena<<endl;
    
    PonerMayusculasIniciales(cadena);
    
    cout<<"Texto modificado: "<<cadena<<endl;
    
    return 0;
}

