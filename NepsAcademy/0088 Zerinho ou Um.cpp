#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);
    // o diferenciado sempre vai ganhar
    // nao percebi isso no começo
    if (a+b+c == 0 || a+b+c == 3) printf("*\n");
    else{
        if(a != b && a != c) printf("A\n");
        else if(b != a && b != c) printf("B\n");
        else printf("C\n");
    }
}


/*
int main(){
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);

    if (a+b+c == 0 || a+b+c == 3) printf("*\n");
    else{
        if((a == 0 && b == 1 && c == 1) || (a == 1 && b == 0 && c == 0)) printf("A\n");
        else if((b == 0 && a == 1 && c == 1) || (b == 1 && a == 0 && c == 0)) printf("B\n");
        else printf("C\n");
    }
}
*/
