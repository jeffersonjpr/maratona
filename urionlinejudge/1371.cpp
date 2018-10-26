#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(true){
        scanf(" %i",&n);
        if(!n) break;
        printf("1");
        for(int i = 2; i <= sqrt(n);i++){
            printf(" %i",i*i);
        }
        printf("\n");
    }
}
