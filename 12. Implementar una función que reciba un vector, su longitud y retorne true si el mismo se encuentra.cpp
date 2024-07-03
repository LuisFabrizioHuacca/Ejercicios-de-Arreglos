#include <iostream>
#include <vector>

using namespace std;

bool estaOrdenado(const vector<int>& vec) {
    int size = vec.size();
    if (size <= 1) {
        return true;
    }

    for (int i = 1; i < size; i++) {
        if (vec[i] < vec[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cout<<"Ingrese la longitud del vector: ";
    cin>>size;

    vector<int> vec(size);

    cout<<"Ingrese los elementos del vector:"<<endl;
    for (int i = 0; i < size; i++) {
        cin>>vec[i];
    }

    cout<<"El vector ingresado esta ordenado: "<<(estaOrdenado(vec) ? "true" : "false")<<endl;

    return 0;
}

