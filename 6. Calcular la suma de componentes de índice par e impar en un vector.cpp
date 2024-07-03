#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n;

    vector<int> numeros(n);

    cout<<"Ingrese los "<<n<<" numeros:"<<endl;
    for (int i = 0; i < n; ++i) {
        cin>>numeros[i];
    }

    int sumaPares = 0;
    int sumaImpares = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            sumaPares += numeros[i];
        } else {
            sumaImpares += numeros[i];
        }
    }

    cout<<"Suma de componentes de indice par: "<<sumaPares<<endl;
    cout<<"Suma de componentes de indice impar: "<<sumaImpares<<endl;

    return 0;
}

