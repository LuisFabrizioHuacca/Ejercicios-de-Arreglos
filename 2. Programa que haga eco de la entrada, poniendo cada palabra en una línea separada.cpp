#include <iostream>
using namespace std;

void eco(char cadena[]) {
    int n=0;
    while (cadena[n]!='\0') {
        n++;
    }

    for (int i=0; i<n; i++) {
        while (cadena[i] == ' ') {
            i++;
        }
        
        while (cadena[i]!=' '&&cadena[i]!='\0') {
            cout<<cadena[i];
            i++;
        }
        
        if (cadena[i]!='\0') {
            cout<<endl;
        }
    }
}

int main() {
    char cadena[100];
    
    cout<<"Ingrese la oracion: ";
    cin.getline(cadena, 100);
    eco(cadena);
    return 0;
}

