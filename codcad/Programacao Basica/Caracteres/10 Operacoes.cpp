#include <iostream>
using namespace std;

int main(){
  char o;
  double a,b;
  cin >> o >> a >> b;
  if(o == 'M'){
    printf("%.2f\n",a*b);
  }
  else{
    printf("%.2f\n",a/b);
  }
}
