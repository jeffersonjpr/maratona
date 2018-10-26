#include <bits/stdc++.h>
using namespace std;

int main(){
    string resp = "NLSO";
    char aux;
    int n,cont = 0;
    do{
        cont = 0;
        scanf("%i",&n);
        for(int i = 0; i < n; i++){
            cin >> aux;
            if(aux == 'D') cont++;
            else cont--;
            if(cont > 3) cont = 0;
            else if(cont < 0) cont = 3;
        }
        if(n) printf("%c\n",resp[cont]);
    }while(n);
}
