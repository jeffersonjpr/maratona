#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int l,c;
    long long int resp = 0;

    scanf("%i",&n);

    for(int i = 0; i < n; i++){
        scanf("%i%i",&l,&c);
        if(l > c) resp += c;
    }

    printf("%lli\n",resp);
}
