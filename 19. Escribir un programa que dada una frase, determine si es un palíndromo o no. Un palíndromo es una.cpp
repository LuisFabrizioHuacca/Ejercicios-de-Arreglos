#include <iostream>
#include <string>

using namespace std;

bool verificarPalindromo(string oracion) 
{
  for (size_t i = 0; i < oracion.length(); i++)
  {
    oracion[i] = tolower(oracion[i]);
    if (!isalnum(oracion[i]))
    {
      oracion.erase(i, 1);
      i--;
    }
  }
  string oracionInvertida = string(oracion.rbegin(), oracion.rend());
  return oracion == oracionInvertida;
}

int main() 
{
  string oracion;
  cout << "Ingrese una oracion: "; getline(cin, oracion);
  if (verificarPalindromo(oracion)) 
  {
    cout << "Es palindromo" << endl;
  }
  else 
  {
    cout << "No es palindromo" << endl;
  }
  return 0;
}


