#include <iostream>
using namespace std;

int main(){
  int a,b;
  while(true){
    cin >> a;
    if(a == 0){
      printf("%i\n",b);
      break;
    }
    if(a > b){
      b = a;
    }
  }
}
