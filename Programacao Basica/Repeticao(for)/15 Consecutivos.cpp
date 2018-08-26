#include <iostream>
using namespace std;

int main(){
    int l,a,b,ct = 1,cm = 0;
    cin >> l;
    cin >> b;
    for(;l > 1; l--){
        cin >> a;
        if(a == b){
            ct ++;
        }
        else{
            if(ct >= cm){
                cm = ct;
            }
            ct = 1;
            b = a;
        }

    }

    if(ct >= cm){
                cm = ct;
    }

    cout << cm << endl;
    }
