#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  char letra;

  cout << "digite a letra " << endl;
  cin >> letra;

  switch (letra)
  {
 
  case 'a':
    cout << letra << " é uma vogal";
  break;

  case 'e':
    cout << letra << " é uma vogal";
  break;

  case 'i':
    cout << letra << " é uma vogal";
  break;

  case 'o':
    cout << letra << " é uma vogal";
  break;

  case 'u':
    cout << letra << " é uma vogal";
  break;

  default:
    cout << letra << " é uma cosoante";
  break;
  }
 
 
  cout << endl << endl;
  return 0;
}