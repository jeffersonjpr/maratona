#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,maior = 0,soma = 0,l[1000],c[1000];
	scanf("%i",&n);
	short int m[1000][1000];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			scanf("%i",&m[i][j]);
		}
	}

	for(int i = 0;i<n;i++){
		l[i]= 0;
		for(int j = 0;j<n;j++){
			l[i]+= m[i][j];
		}
	}

	for(int i = 0;i<n;i++){
		c[i]= 0;
		for(int j = 0;j<n;j++){
			c[i]+= m[j][i];
		}
	}

	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			soma = (l[i] + c[j]) - (2*m[i][j]);
			if(soma > maior) maior = soma;
		}
	}
	printf("%i\n",maior);

}
