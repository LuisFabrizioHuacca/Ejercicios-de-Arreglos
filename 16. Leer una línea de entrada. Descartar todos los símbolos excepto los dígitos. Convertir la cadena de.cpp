#include <iostream>

using namespace std;

int main() 
{
  char lineaTexto[100];
  int numeroAcumulado = 0;
  cout << "Ingrese una linea de texto: ";
  cin.getline(lineaTexto, sizeof(lineaTexto));

  for (int indice = 0; lineaTexto[indice] != '\0'; indice++) {
    if (isdigit(lineaTexto[indice])) {
      numeroAcumulado = numeroAcumulado * 10 + (lineaTexto[indice] - '0');
    }
  }

  numeroAcumulado += 2;

  cout << "Valor final: " << numeroAcumulado << endl;

  return 0;
}

