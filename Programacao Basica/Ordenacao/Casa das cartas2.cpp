#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;

int m;

bool compara(ii a, ii b){
	return b.first%m < a.first%m;
}

int main(){
	int n;
	ii vetor[100004];

	scanf("%i%i",&n,&m);
	for(int i = 0; i < n; i++){
		scanf("%i",&vetor[i].first);
		vetor[i].second = vetor[i].first % m;
	}
	sort(vetor ,vetor + n,compara);
	for (size_t i = 0; i < n; i++) {
		printf("%i ",vetor[i].first);
	}
	printf("\n");

}
