#include <bits/stdc++.h>
using namespace std;

int cidade[510],peso[510];
int resp = 0,n,m;
struct Aresta{
	int custo;
	int a,b;
};
Aresta aresta[125000];

int raiz(int n){
	if(cidade[n] == n) return n;
	return cidade[n] = raiz(cidade[n]);
}

int compara(Aresta a, Aresta b){
	return a.custo < b.custo;
}

void uniao(int a,int b){
	int ra = raiz(a);
	int rb = raiz(b);
	if(peso[ra] > peso[rb]){
		cidade[rb] = ra;
		peso[ra] += peso[rb];
		return;
	}
	cidade[ra] = rb;
	peso[rb] += peso[ra];
}
int kruskal(){
	int cont = 1, total = 0;
	for(int i = 0; i < m; i++){
		if(raiz(aresta[i].a) == raiz(aresta[i].b)) continue;
		uniao(aresta[i].a,aresta[i].b);
		total += aresta[i].custo;
		cont++;
		if(cont == n) break;
	}
	return total;
}
int main(){
	int u,v,c;
	scanf("%i%i",&n,&m);
	for(int i = 1;i <= n; i++){
		cidade[i] = i;
		peso[i] = 1;
	}
	for(int i = 0; i < m; i++){
		scanf("%i%i%i",&u,&v,&c);
		aresta[i].custo = c;
		aresta[i].a = u;
		aresta[i].b = v;
	}
	sort(aresta,aresta +m,compara);
	printf("%i\n",kruskal());
}
