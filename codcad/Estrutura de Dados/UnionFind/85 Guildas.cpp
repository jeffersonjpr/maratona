#include <bits/stdc++.h>
using namespace std;

int jogador[100010];
int pontos[100010];

int raiz(int n){
	if(jogador[n] == n) return n;
	return jogador[n] = raiz(jogador[n]);
}

void uniao(int a,int b){
	int ra = raiz(a);
	int rb = raiz(b);
	if(pontos[ra] > pontos[rb]){
		jogador[rb] = ra;
		pontos[ra] += pontos[rb];
	}
	else{
		jogador[ra] = rb;
		pontos[rb] += pontos[ra];
	}
}

int main(){
	int n,m,x,y;
	int win = 0;
	while(1){
		scanf("%i%i",&n,&m);
		if(n == 0) return 0;
		win = 0;
		for(int i = 1; i <= n; i++){
			scanf("%i",&x);
			pontos[i] = x;
			jogador[i] = i;
		}
		for(int i = 0; i < m; i++){
			scanf("%i%i%i",&n,&x,&y);
			if(n == 1){
				uniao(x,y);
			}
			else{
				if(raiz(1) == raiz(x)){
					if(pontos[raiz(x)] > pontos[raiz(y)]) win++;
					else continue;
				}
				if(raiz(1) == raiz(y)){
					if(pontos[raiz(y)] > pontos[raiz(x)]) win++;
					else continue;
				}
			}
		}
		printf("%i\n",win);
	}

}
