#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int dia;

  cout << "digite o numero do dia da semana de 1 a 7 " << endl;
  cin >> dia;

  switch (dia)
  {
  case 1:
    cout << "segunda-feira";
    break;
    
  case 2:
    cout << "terça-feira";
  break;
    
  case 3:
    cout << "quarta-faiera";
  break;
  
  case 4:
    cout << "quinta-feira";
  break;

  case 5:
    cout << "sexta-feira";
  break;

  case 6 :
    cout << "sabado";
  break;

  case 7 :
    cout << "domingo";
  break;

  default:
    cout << " dia invalido";
  
    break;
  }
 
 
  cout << endl << endl;
  return 0;
}