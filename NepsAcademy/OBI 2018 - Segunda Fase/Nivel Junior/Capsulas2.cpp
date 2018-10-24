#include <bits/stdc++.h>
using namespace std;

unsigned int x[1000002];

int main(){
    int n,f,aux,acumulado = 0,y,maior =0,menor = 1000002;
    scanf("%i%i",&n,&f);
    for(int i = 0; i < n;i++){
        aux = 0;
        scanf("%i",&y);
        for(int j = y;true; j+=y){
            if(j > 1000002) break;
            x[j]++;
            aux++;
            if(aux >= f) break;
        }
        if(y < menor) menor = y;
        else if(y > maior) maior = y;
    }
    aux = 1;
    for(int i = 1; true; i++){
        if(i > maior) i = menor;
        aux++;
        acumulado += x[i];
        if(acumulado >= f){
            printf("%i\n",aux);
            return 0;
        }
    }
}
