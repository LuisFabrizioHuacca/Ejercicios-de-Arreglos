#include <iostream>

using namespace std;

int main() {
    int MAX_NUMEROS = 100;
    int numeros[MAX_NUMEROS];
    int n;

    cout<<"Ingrese la cantidad de numeros a ingresar (max. "<<MAX_NUMEROS<<"): ";
    cin>>n;

    if (n <= 0 || n > MAX_NUMEROS) {
        cout<<"La cantidad de numeros debe estar entre 1 y "<<MAX_NUMEROS<<"."<<endl;
        return 1;
    }

    cout<<"Ingrese los "<<n<<" numeros:"<<endl;
    for (int i = 0; i < n; ++i) {
        cin>>numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];
    int contadorMayor = 1;
    int contadorMenor = 1;

    for (int i = 1; i < n; ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
            contadorMayor = 1;
        } else if (numeros[i] == mayor) {
            contadorMayor++;
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
            contadorMenor = 1;
        } else if (numeros[i] == menor) {
            contadorMenor++;
        }
    }

    cout<<"\nEl numero mayor es: "<<mayor<<" y se repite "<<contadorMayor<<" veces."<<endl;
    cout<<"El numero menor es: "<<menor<<" y se repite "<<contadorMenor<<" veces."<<endl;

    return 0;
}

