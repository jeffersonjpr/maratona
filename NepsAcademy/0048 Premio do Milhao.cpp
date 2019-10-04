#include <bits/stdc++.h>
using namespace std;

long long a,b,c;
int main(){
    scanf("%lli",&a);
    for(int i = 1; i <= a; i++){
        scanf("%lli",&b);
        c+=b;
        if(c >= 1000000){
            printf("%i\n",i);
            exit(0);
        }
    }

}
