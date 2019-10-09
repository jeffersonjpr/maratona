#include <bits/stdc++.h>
using namespace std;

int vetor[60];

int main(){
    int n, bomba;
    scanf("%i",&n);

    for(int i = 1; i < (n + 1); i++){
        scanf("%i",&bomba);
        if(bomba){
            vetor[i-1] += 1;
            vetor[i] += 1;
            vetor[i+1] += 1;
        }
    };
    for(int i = 1; i < (n + 1); i++){
        printf("%i\n",vetor[i]);
    }
}
