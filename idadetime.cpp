#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int maior = 0, menor = 0, idade;

for(int i = 0; i < 6; i++){
    
    cout << "digite a idade " << i << " : ";
   
    cin >> idade;
   
    if(i == 0){
       
        maior = idade;
        menor = idade;

    }else{

      if(idade > maior){
       
        maior = idade;
      
      }
      if(idade < menor){
       
        menor = idade;
        
      }
    }
    cout << "maior idade do time é " << maior << "menor idade do time é " << menor << endl;
}



  cout << endl << endl;
  return 0;
}