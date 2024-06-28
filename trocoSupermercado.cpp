#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float valorCompra, valorPago, troco;
  char resposta;
  bool proximocliente = true ;
  
  while( proximocliente){
    do{
    
    cout<< "valor da compra ? " ;
    cin >> valorCompra;

    } while (valorCompra <= 0);
        
        do{
        
        cout << "valor a ser pago ";
        cin >> valorPago;

        }

    while(valorPago < valorCompra);
    
   troco = valorPago - valorCompra;

   cout << "seu troco é " << troco << endl;

   cout << " para proximo cliente digite (s) ou (S)" << endl;

   cin >> resposta;

proximocliente = (resposta == 's' || resposta == 'S');
    
    }
 
  cout << endl << endl;
  return 0;
}