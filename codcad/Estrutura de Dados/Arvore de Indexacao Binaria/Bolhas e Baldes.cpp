#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;

ii v[100010];
int arvbit[100010];
int tam;
void update(int n, int up){
	while(n <= tam){
		arvbit[n] += up;
		n += n&-n;
	}
}
int soma(int n){
	int resp = 0;
	while(n){
		resp += arvbit[n];
		n -= n&-n;
	}
	return resp - 1;
}

int main(){
	int x,resp;
	while(true){
		resp = 0;
		scanf("%i",&tam);
		if(!tam) return 0;
		for(int i = 1; i <= tam; i++){
			scanf("%i",&x);
			v[i] = ii(x,i);
			update(i,1);
		}
		sort(v+1,v+tam+1);
		for(int i = 1; i <= tam; i++){
			resp += soma(v[i].second);
			update(v[i].second,-1);
		}
		if(resp % 2 == 0) printf("Carlos\n");
		else printf("Marcelo\n");
	}
}
