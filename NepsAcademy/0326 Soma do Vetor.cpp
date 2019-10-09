#include <bits/stdc++.h>
using namespace std;

long long soma_vetor(int n, int v[]){
    long long soma = 0;
    for(int i = 0 ; i < n; i++){
        soma += v[i];
    }
    return soma;
}

int main(){

    int n, v[100100];
    scanf("%i",&n);

    for(int i=0;i<n;i++)
        scanf("%i",v + i);

    cout << soma_vetor(n,v) << "\n";
}
