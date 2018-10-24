#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,f,aux,acumulado = 0;
    vector<int> vet;
    scanf("%i%i",&n,&f);
    for(int i = 0; i < n; i++){
        scanf("%i",&aux);
        vet.push_back(aux);
    }
    // sort(vet.begin(),vet.end());
    for(int i = 1; true;i++){
        for(int j = 0; j < n; j++){
            if(vet[j] > i) break;
            if((i % vet[j]) == 0) acumulado++;
        }
        if(acumulado >= f){
            printf("%i\n",i);
            return 0;
        }
    }
}
