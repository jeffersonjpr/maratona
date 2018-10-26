#include <bits/stdc++.h>
using namespace std;
int m;

bool compara(int a, int b){
	if(b%m == a%m) return a > b;
	return b%m < a%m;
}

int main(){
	int n,vetor[100004];

	scanf("%i%i",&n,&m);
	for(int i = 0; i < n; i++){
		scanf("%i",&vetor[i]);
	}
	sort(vetor ,vetor + n,compara);
	for (size_t i = 0; i < n; i++) {
		printf("%i ",vetor[i]);
	}
	printf("\n");

}
