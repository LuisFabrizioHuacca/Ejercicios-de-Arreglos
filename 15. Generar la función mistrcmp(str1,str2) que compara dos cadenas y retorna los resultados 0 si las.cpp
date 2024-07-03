#include<iostream>

using namespace std;

int compararCadenas(char *cadena1, char *cadena2)
{
  int indice = 0;
  while(cadena1[indice] != '\0' && cadena2[indice] != '\0') 
  {
    if (cadena1[indice] > cadena2[indice]) 
    {
      return 1;
    } 
    else 
    {
      if(cadena1[indice] < cadena2[indice])
      {
        return -1;
      }
    }
    indice++;
  }
  if(cadena1[indice] == '\0')
  {
    if(cadena2[indice] != '\0') 
    {
      return -1; 
    }
    else 
    {
      return 0;
    }
  } 
  else 
  {
    return 1;
  }
}

int main() 
{
  int resultado;
  char texto1[100];
  char texto2[50];
  
  cout << "Ingrese un texto: "; cin >> texto1;
  cout << "Ingrese un texto: "; cin >> texto2;

  resultado = compararCadenas(texto1, texto2);

  switch (resultado) 
  {
    case 0:
      cout << "Las cadenas son iguales ";
      break;
    case 1:
      cout << "Texto1 es mayor que Texto2 ";
      break;
    case -1:
      cout << "Texto2 es mayor que Texto1 ";
      break;
  }
  
  return 0;
}

