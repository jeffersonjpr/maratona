#include <iostream>
using namespace std;

int main(){
  int n,b,menor;
  cin >> n;
  cin >> menor;
  for(;n > 1;n--){
    cin >> b;
    if(b < menor){
      menor = b;
    }
  }
  printf("%i\n",menor);
}
