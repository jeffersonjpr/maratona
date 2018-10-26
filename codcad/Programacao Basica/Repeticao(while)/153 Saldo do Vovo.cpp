#include <iostream>
using namespace std;

int main(){
  int dias,conta,mov,menor;
  cin >> dias >> conta;
  menor = conta;
  for(;dias >0;dias--){
    cin >> mov;
    conta += mov;
    if(conta < menor){
      menor = conta;
    }
  }
  printf("%i\n",menor);
}
