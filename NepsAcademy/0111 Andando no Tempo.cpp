#include <bits/stdc++.h>
using namespace std;

int main(){
    int v[3];
    int aux;
    for (int i = 0; i < 3; i++) {
        scanf("%i",v + i);
    }
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++) {
            if(v[j] < v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

    // for (size_t i = 0; i < 3; i++) {
    //     printf("%i\n",v[i] );
    // }

    if( (v[0] - v[1]) == 0 || (v[0] - v[2]) == 0 || (v[1] - v[2]) == 0) printf("S\n");
    else if( (v[0] - v[1] - v[2]) == 0 ) printf("S\n");
    else printf("N\n");
}
