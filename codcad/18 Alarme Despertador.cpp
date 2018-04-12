#include <iostream>
using namespace std;

int main(){
  int h1,m1,h2,m2,hrdia = 1440,min = 60;
  while(true){
    cin >> h1 >> m1 >> h2 >> m2;
    if(h1 == 0 and h2 == 0 and m1 == 0 and m2 ==0){
      cout << endl;
      break;
    }
    h1 += 1,h2 += 1,m1 += 1,m2 += 1;
    if(h1 == h2){
      if(m1 >= m2){
        h1 -= 1,h2 -= 1,m1 -= 1,m2 -= 1;
        printf("%i\n",(hrdia -(h1 *min)-m1)+(h2 * min)+m2);
      }
      else{
        printf("%i\n",m2 -m1);
      }
    }
    else if(h1 < h2){
      printf("%i\n",(h2 - h1 - 1)*min +(min - m1 + m2));
    }
    else{
      h1 -= 1,h2 -= 1,m1 -= 1,m2 -= 1;
      printf("%i\n",(hrdia -(h1 *min)-m1)+(h2 * min)+m2);
    }
  }
}
