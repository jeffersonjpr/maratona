#include <iostream>
using namespace std;

int main(){
  int a,b,c=0,x,y;
  cin >> a >> b;
  for(a < 0;a--;){
    cin >> x >> y;
    if ((x+y) >= b){
      c++;
    }
  }
  printf("%i\n",c);
}
