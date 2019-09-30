#include <bits/stdc++.h>
using namespace std;
//ISSO TA ERRADO
double veTam[110000], menor = DBL_MAX;
int n;
long long x, y;
long long unsigned penalidade;

int main(){
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        scanf("%lld%lld",&x,&y);
        x = 0-x; x = x*x;
        y = 0-y; y = y*y;
        veTam[i] = abs(sqrt(x + y)); //o quadrado do comprimento da hipotenusa é igual à soma dos quadrados dos comprimentos dos catetos
    }

    for(int i = 0; i < n; i++){
        if(veTam[i] < menor) menor = veTam[i]; //ignorando comparacoes descenessarias em casos que nao ha penalidade
        else{
            for(int j = i -1; j > -1; j--){ //computando penalidade
                if(veTam[j] <= veTam[i]) penalidade++;
            }
        }
    }
    printf("%llu\n",penalidade);
}
