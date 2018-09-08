#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned short int n[2];
    scanf("%i%i",&n[0],&n[1]);
    sort(n,n+2);
    if((n[0] + 1) == n[1] and n[0] % 2 == 1){
        printf("oitavas\n");
        return 0;
    }

    if(n[0] <= 8 and n[1] >= 9){
        printf("final\n");
        return 0;
    }

    if(n[1] <= 8){
        if(n[0] <= 4 and n[1] >= 5) {
            printf("semifinal\n");
            return 0;
        }
    }
    else{
        if(n[0] <= 12 and n[1] >= 13) {
            printf("semifinal\n");
            return 0;
        }
    }

    printf("quartas\n");
    return 0;
}
