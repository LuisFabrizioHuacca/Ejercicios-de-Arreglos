#include <iostream>

using namespace std;

void calcularSumaPositivosNegativos(int nums[], int size, int &sumaPositivos, int &sumaNegativos) {
    sumaPositivos = 0;
    sumaNegativos = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] > 0) {
            sumaPositivos += nums[i];
        } else if (nums[i] < 0) {
            sumaNegativos += nums[i];
        }
    }
}

int main() {
    int size;
    cout<<"Ingrese el tamano del arreglo: ";
    cin>>size;

    int nums[size];

    cout << "Ingrese los elementos del arreglo:"<<endl;
    for (int i = 0; i < size; i++) {
        cin>>nums[i];
    }

    int sumaPositivos = 0, sumaNegativos = 0;

    calcularSumaPositivosNegativos(nums, size, sumaPositivos, sumaNegativos);

    cout << endl << "Arreglo de numeros:"<<endl;
    for (int i = 0; i < size; i++) {
        cout<<nums[i] << " ";
    }
    cout << endl << endl;

    cout<<"Suma de elementos positivos: "<<sumaPositivos<<endl;
    cout<<"Suma de elementos negativos: "<<sumaNegativos<<endl;

    return 0;
}

