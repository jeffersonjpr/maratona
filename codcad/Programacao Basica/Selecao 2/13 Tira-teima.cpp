#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if(x >= 0 and x <= 432){
        if(y >= 0 and y <=468){
            printf("dentro");
        }
        else{printf("fora");}
    }
    else{printf("fora");}
}
