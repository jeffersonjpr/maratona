#include <bits/stdc++.h>
using namespace std;

int bancos[100010];
int pesos[100010];

int raiz(int n){
	if(bancos[n] == n) return n;
	return bancos[n] = raiz(bancos[n]);
}

void uniao(int x, int y){
	int rx = raiz(x);
	int ry = raiz(y);
	if(pesos[rx] > pesos[ry]){
		bancos[ry] = rx;
		pesos[rx] += pesos[ry];
		return;
	}
	bancos[rx] = ry;
	pesos[ry] += pesos[rx];
}

int main(){
	int n,k,x,y;
	char b;
	scanf("%i%i",&n,&k);
	for(int i = 1; i <= n; i++){
		bancos[i] = i;
		pesos[i] = i;
	}
	for(int i = 0; i < k; i++){
		cin >> b;
		scanf("%i%i",&x,&y);
		if(b == 'C'){
			if(raiz(x) == raiz(y)) printf("S\n");
			else printf("N\n");
		}
		else{
			uniao(x,y);
		}

	}
}
