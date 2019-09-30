#include <bits/stdc++.h>
using namespace std;

int main(){
	double a,b;
	scanf("%lf %lf",&a,&b);
	a = (a + b) / 2;
	if(a >= 7.0) printf("Aprovado\n");
	else if(a >= 4.0) printf("Recuperacao\n");
	else printf("Reprovado\n");
}
