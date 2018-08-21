#include <iostream>
using namespace std;
int main(){
  int n,t1,t2,tt = 0;
  cin >> n >> t1;
  for(;n > 1;n--){
    cin >> t2;
    if(t2 - t1 > 10){
      tt += 10;

    }
    else{
      tt += t2 - t1;
    }
    t1 = t2;
  }
  printf("%i\n",tt + 10);
}
