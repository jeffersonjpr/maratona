#include <bits/stdc++.h>
using namespace std;

int main(){
    float a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    sort(a,a+5);
    a[0] = 0.0;
    for(int i = 1; i < 4; i++){
        a[0] += a[i];
    }
    printf("%.1f\n",a[0]);
}
