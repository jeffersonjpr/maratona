#include <iostream>
using namespace std;

int main(){
  int loop,lata,copo,copoq = 0;
  cin >> loop;
  for(;loop > 0;loop--){
    cin >> lata >> copo;
    if(lata > copo){
      copoq += copo;
    }
  }
  printf("%i\n",copoq);
}
