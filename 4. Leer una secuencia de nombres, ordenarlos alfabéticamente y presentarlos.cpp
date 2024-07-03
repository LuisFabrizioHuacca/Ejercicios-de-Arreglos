#include <iostream>

using namespace std;

bool compararDescendente(const char* a, const char* b) {
    while (*a && *b && *a == *b) {
        a++;
        b++;
    }
    return *a > *b;
}

void copiarCadena(char* destino, const char* origen) {
    while (*origen) {
        *destino = *origen;
        destino++;
        origen++;
    }
    *destino = '\0'; 
}

int main() {
    const int MAX_NOMBRES = 100; 
    char nombres[MAX_NOMBRES][50]; 

    int numNombres = 0; 
    cout << "Ingresa los nombres (termina con una linea vacia):\n";

    while (numNombres < MAX_NOMBRES && cin.getline(nombres[numNombres], 50) && nombres[numNombres][0] != '\0') {
        numNombres++;
    }

    for (int i = 0; i < numNombres - 1; i++) {
        for (int j = 0; j < numNombres - i - 1; j++) {
            if (compararDescendente(nombres[j], nombres[j + 1])) {
                char temp[50];
                copiarCadena(temp, nombres[j]);
                copiarCadena(nombres[j], nombres[j + 1]);
                copiarCadena(nombres[j + 1], temp);
            }
        }
    }

    cout << "\nNombres ordenados alfabeticamente de forma descendente:\n";
    for (int i = 0; i < numNombres; i++) {
        cout << nombres[i] << endl;
    }

    return 0;
}

