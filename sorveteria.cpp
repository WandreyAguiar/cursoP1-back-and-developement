#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
   float acai = 12.00, tapioca = 15.00, total;
    int quantacai, quanttapioca;
    char pagamento;

    cout << "Qual sera seu pedido? Temos açai por 12 reais: ";
    cin >> quantacai;
    cout << "E temos tapioca por 15 reais: ";
    cin >> quanttapioca;

    total = quantacai * acai + quanttapioca * tapioca;

    if (total >= 100.00) {
        cout << "Se sua forma de pagamento for à vista digite A, se for a prazo digite P: ";
        cin >> pagamento;

        if (pagamento == 'A') {
            cout << "O total de sua conta mais seu desconto de 10%: " << total * 0.90 << endl;
        } else if (pagamento == 'P') {
            cout << "O total de sua conta mais seu desconto de 5%: " << total * 0.95 << endl;
        } else {
            cout << "Forma de pagamento invalida." << endl;
        }
    } else {
        cout << "Total de sua conta: " << total << endl;
    }

  cout << endl << endl;
  return 0;
}