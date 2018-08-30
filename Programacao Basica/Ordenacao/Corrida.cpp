#include <bits/stdc++.h>
using namespace std;
typedef pair <int,int> ii;
bool ajeita(ii a, ii b){
	return a.second < b.second;
}
int main(){
	ii vet[100];
	int n,m,aux;
	scanf("%i%i",&n,&m);
	for(int i = 0;i < n; i++){
		vet[i].first = i+1;
		vet[i].second = 0;

	}
	for(int i = 0;i < n; i++){
		for(int j = 0;j < m;j++){
			scanf("%i",&aux);
			vet[i].second += aux;
		}
	}

	sort(vet,vet + n,ajeita);
	printf("\n%i\n%i\n%i\n",vet[0].first,vet[1].first,vet[2].first);
}
