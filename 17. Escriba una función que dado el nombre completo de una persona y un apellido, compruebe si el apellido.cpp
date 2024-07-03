#include <iostream>
#include <string>

using namespace std;

bool contieneApellido(string nombreCompleto, string apellidoBuscar) 
{
  for (int i = 0; nombreCompleto[i] != '\0'; i++) 
  {
    if (nombreCompleto[i] >= 'A' && nombreCompleto[i] <= 'Z') 
    {
      nombreCompleto[i] += 'a' - 'A';
    }
  }
  for (int i = 0; apellidoBuscar[i] != '\0'; i++)
  {
    if (apellidoBuscar[i] >= 'A' && apellidoBuscar[i] <= 'Z') 
    {
      apellidoBuscar[i] += 'a' - 'A';
    }
  }
  int posicion = 0;
  while (nombreCompleto[posicion] != '\0' && apellidoBuscar[0] != '\0') 
  {
    if (nombreCompleto[posicion] == apellidoBuscar[0])
    {
      int j = 1;
      while (apellidoBuscar[j] != '\0' && nombreCompleto[posicion + j] != '\0') 
      {
        if (nombreCompleto[posicion + j] != apellidoBuscar[j]) 
        {
          break;
        }
        j++;
      }
      if (apellidoBuscar[j] == '\0' && (posicion == 0 || nombreCompleto[posicion - 1] == ' ')) 
      {
        return true;
      }
    }
    posicion++;
  }
  return false;
}

int main() 
{
  string nombreCompleto;
  string apellidoBuscar;
  cout << "Ingrese el nombre completo (nombres y apellidos): "; getline(cin, nombreCompleto);
  cout << "Ingrese el apellido: "; getline(cin, apellidoBuscar);
  bool resultado = contieneApellido(nombreCompleto, apellidoBuscar);
  if (resultado) 
  {
    cout << "El apellido " << apellidoBuscar << " sí pertenece a " << nombreCompleto << endl;
  } 
  else 
  {
    cout << "El apellido " << apellidoBuscar << " no pertenece a " << nombreCompleto << endl;
  }
  return 0;
}

