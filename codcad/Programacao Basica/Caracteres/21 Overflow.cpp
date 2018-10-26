#include <iostream>
using namespace std;

int main (){
  int over,a,b;
  char op;
  cin >> over >> a >> op >> b;
  if(op == '+'){
    if(a + b > over){
      printf("OVERFLOW\n");
    }
    else{printf("OK\n");}
  }
  else{
    if(a * b > over){
      printf("OVERFLOW\n");
    }
    else{printf("OK\n");}
  }
}
