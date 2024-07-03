#include <iostream>
#include <vector>

using namespace std;

bool esCapicua(long long numero) {
    vector<int> digitos;
    while (numero>0) {
        int digito=numero % 10;
        digitos.push_back(digito);
        numero/=10;
    }

    int inicio=0;
    int fin=digitos.size()-1;
    while (inicio < fin) {
        if (digitos[inicio] != digitos[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

int main() {
    long long numero;
    cout<<"Ingrese un numero de 10 cifras: ";
    cin>>numero;

    if (numero < 1000000000LL || numero > 9999999999LL) {
        cout<<"El numero no tiene 10 cifras."<<endl;
    } else {
        if (esCapicua(numero)) {
            cout<<"El numero es capicua."<<endl;
        } else {
            cout<<"El numero no es capicua."<<endl;
        }
    }

    return 0;
}

