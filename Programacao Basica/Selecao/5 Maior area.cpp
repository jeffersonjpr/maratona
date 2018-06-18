#include <iostream>
using namespace std;

int main(){
  int a,b,c,d,ret1,ret2;
  cin >> a >> b;
  cin >> c >> d;
  ret1 = a * b;
  ret2 = c * d;
  if(ret1 > ret2){
    printf("Primeiro\n");
  }
  else if(ret2 > ret1){
    printf("Segundo\n");
  }
  else{
    printf("Empate\n");
  }
}
