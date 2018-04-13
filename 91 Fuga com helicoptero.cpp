#include <iostream>
using namespace std;

int main(){
    int h,p,f,d;
    cin >> h >> p >> f >> d;
    while (true){
        if (h == f){
            printf("S");
            break;
        }
        if(p == f){
            printf("N");
            break;
        }
        f += d;
        if(f == -1){
            f = 15;
        }
        if(f == 16){
            f = 0;
        }
    }
    return 0;
}
