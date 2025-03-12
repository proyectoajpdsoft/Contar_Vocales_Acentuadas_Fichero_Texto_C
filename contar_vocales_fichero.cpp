#include <string>
#include "iostream"
#include <fstream>

using namespace std;

int main () 
{
  string ch, rutaFichero;
  string txt;
  int nas = 0, nes = 0, nis = 0, nos = 0, nus = 0;
  char vocalA = 'á';
  char vocalE = 'é';
  char vocalI = 'í';
  char vocalO = 'ó';
  char vocalU = 'ú';
  FILE* fi;

  cout << "\nIntroduzca la ruta y nombre del fichero y pulsa INTRO:\n";
  cin >> rutaFichero;

  ifstream in(rutaFichero);
  char caracter;

  if (in.is_open())
  {
    while (in.good()) 
    {
      in.get(caracter);
      if (caracter == vocalA)
        nas++;
      if (caracter == vocalE)
        nes++;
      if (caracter == vocalI)
        nis++;
      if (caracter == vocalO)
        nos++;
      if (caracter == vocalU)
        nus++;            
    }
  }

  if (!in.eof() && in.fail())
    cout << "Error al leer fichero " << rutaFichero << endl;

  in.close();
  
  cout << "\n\nEl número de á es: " << nas;
  cout << "\nEl número de é es: " << nes;
  cout << "\nEl número de í es: " << nis;
  cout << "\nEl número de ó es: " << nos;
  cout << "\nEl número de ú es: " << nus;

  return 0;
}