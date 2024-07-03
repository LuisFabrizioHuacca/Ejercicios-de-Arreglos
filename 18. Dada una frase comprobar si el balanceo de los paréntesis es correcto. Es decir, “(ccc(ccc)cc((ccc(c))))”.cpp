#include <iostream>

using namespace std;

bool verificarBalanceoParentesis(char cadena[]) 
{
  int balance = 0;
  for (int i = 0; cadena[i] != '\0'; i++) 
  {
    if (cadena[i] == '(') 
    {
      balance++;
    }
    else 
    {
      if (cadena[i] == ')')
      {
        if (balance == 0)
        {
          return false;
        }
        balance--;
      }
    }
  }
  return balance == 0;
}

int main() 
{
  char entrada[100];
  cout << "Ingrese la frase: "; cin >> entrada;
  if (verificarBalanceoParentesis(entrada))
  {
    cout << "El balanceo de parentesis es correcto" << endl;
  }
  else
  {
    cout << "El balanceo de parentesis es incorrecto" << endl;
  }
  return 0;
}

