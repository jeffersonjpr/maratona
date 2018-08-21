#include <iostream>
using namespace std;

int main()
{
  int a,b,c;
  cin >> a >> b >> c;
  if (a != b and a != c){printf("A\n");}
  else if(b != a and b != c){printf("B\n");}
  else if(c != a and c != b){printf("C\n");}
  else{printf("*\n");}
}
