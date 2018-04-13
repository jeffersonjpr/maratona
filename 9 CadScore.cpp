#include <iostream>
using namespace std;

int main()
{
    int pontos,atual,fases;
    cin >> pontos >> fases;
    for(fases > 0;fases --;){
        cin >> atual;
        pontos += atual;
        if(pontos > 100){
            pontos = 100;
        }
        else if(pontos < 0){
            pontos = 0;
        }
    }
    printf("%i\n",pontos);
}
