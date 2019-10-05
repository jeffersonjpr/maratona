#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, hold[11000];

    int resp=0;

    scanf("%i",&n);

    for(int i = 0; i < n; i++) scanf("%i",&hold[i]);

    for(int i = 0; i < (n - 2); i++){
        if (hold[i] == 1 && hold[i + 1] == 0 && hold[i + 2] == 0){
            resp++;
        }
    }

    //imprimindo resultado
    printf("%i\n",resp);
}
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, hold;

    int cont = 0;

    int resp=0;

    scanf("%i",&n);

    for(int i = 0; i < n; i++){
        scanf("%i",&hold);

        if(cont == 0 && hold == 1) {cont++;}
        else if( cont == 1 && hold == 0) {cont++;}
        else if( cont == 2 && hold == 0){resp++; cont = 0;}
        else if (hold == 1) cont = 1;
        else cont = 0;
    }

    //imprimindo resultado
    printf("%i\n",resp);
}
*/
