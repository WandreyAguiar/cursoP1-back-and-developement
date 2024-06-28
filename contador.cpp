#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int numero, ctd = 0;

  cout << "digite um numero inteiro";
  cin >> numero;
  ctd++;
  
  while (numero > 0){
    cout << "digite um novo  numero ";
    cin >> numero;
    ctd++;
  }
 cout << "vc digitou " << ctd << " numeros";

  cout << endl << endl;
  return 0;
}