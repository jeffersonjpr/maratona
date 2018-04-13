#include <iostream>
using namespace std;

int ganhou(int a, int b){
    if(a > b){
        printf("A");
    }
    else{
        printf("B");
    }
}
int main(){
    int o1,o2,p1,p2,b1,b2;
    cin >> o1 >> p1 >> b1;
    cin >> o2 >> p2 >> b2;
    if(o1 == o2){
        if(p1 == p2){
            ganhou(b1,b2);
        }
        else{
            ganhou(p1,p2);
        }
    }
    else{
        ganhou(o1,o2);
    }
}
