#include <iostream>

using namespace std;

int contarOcurrencias(char* cadena, char letra) {
    int contador = 0;

    while (*cadena != '\0') {
        if (*cadena == letra) {
            contador++;
        }
        cadena++;  
    }

    return contador;
}

int main() {
    char entrada[100];  
    char letraBuscada;

    cout<<"Ingrese una cadena de texto: ";
    cin.getline(entrada, sizeof(entrada));

    cout<<"Ingrese la letra que desea contar: ";
    cin>>letraBuscada;

    int ocurrencias = contarOcurrencias(entrada, letraBuscada);

    cout<<"La letra '"<<letraBuscada<<"' aparece "<<ocurrencias<<" veces en la cadena."<<endl;

    return 0;
}

