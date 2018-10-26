#include <iostream>
using namespace std;

int main(){
  int n,res=0;
  char a;
  cin >> n;
  for(;n>0;n--){
    cin >> a;
    if(a == 'P'){res += 2;}
    else if(a == 'C'){res += 2;}
    else if(a == 'A'){res += 1;}
  }
  printf("%i\n",res);
}
