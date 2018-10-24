#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x = 0,y;
    scanf("%i",&n);
    for(int i = 0; i < n;i++){
        scanf("%i",&y);
        if(y - x > 8){
            printf("N\n");
            return 0;
        }
        x = y;
    }
    printf("S\n");
}
