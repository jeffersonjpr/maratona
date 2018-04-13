#include <iostream>
using namespace std;
int main(){
  bool a,b;
  cin >> a >> b;
  if(a == 0){
    printf("C\n");
  }
  else{
    if(b){
      printf("A\n");
    }
    else{
      printf("B\n");
    }
  }
}
