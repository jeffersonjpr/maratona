#include <iostream>
using namespace std;

int main(){
  int cv,ce,cs;
  int fv,fe,fs;
  cin >> cv >> ce >> cs;
  cin >> fv >> fe >> fs;
  cv *= 3; fv *= 3;
  cv += ce; fv += fe;

  if(cv == fv){
    if(cs > fs){
      printf("C\n");
    }
    else if (cs == fs){
      printf("=\n");
    }
    else{
      printf("F\n");
    }
  }
  else if(cv > fv){
    printf("C\n");
  }
  else{
    printf("F\n");
  }

}
