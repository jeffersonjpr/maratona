
#include <iostream>
using namespace std;

int main(){
  int a,b = 0,c;
  cin >> a;
  a =1;
  while(true){
    cin >> c;
    b += c;
    if(b >= 1000000){
      printf("%i\n",a);
      break;
    }
    else{
      a++;
    }
  }
}
