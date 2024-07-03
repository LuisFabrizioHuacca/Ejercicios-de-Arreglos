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

    cout<<"Vector original:"<<endl;
    for (int num : numeros) {
        cout<<num<<" ";
    }
    cout<<endl;

    int size = numeros.size();
    for (int i = 0; i < size / 2; ++i) {
        int temp = numeros[i];
        numeros[i] = numeros[size - 1 - i];
        numeros[size - 1 - i] = temp;
    }

    cout<<"Vector invertido:"<<endl;
    for (int num : numeros) {
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}

