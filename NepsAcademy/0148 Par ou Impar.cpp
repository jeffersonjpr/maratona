#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    scanf("%i%i",&a,&b);
    a = (a+b)%2;
    if(!a) printf("Bino\n");
    else printf("Cino\n");
}
