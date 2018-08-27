#include <bits/stdc++.h>
using namespace std;
int quant = 0,meta[10];
bool sortdiferenciado(int a,int b){
	if(a < b){
		meta[quant] = b;
		quant++;
		return a < b;
	}
	else return a < b;
}
int main(){
	int n,vetor[10];
	scanf("%i",&n);
	for(int i = 0;i<n;i++){
		scanf("%i",&vetor[i]);
	}
	for(int i = 0;i<n;i++){
		printf("%i ",vetor[i]);
	}
	printf("\n");
	sort(vetor,vetor + n,sortdiferenciado);
	for(int i = 0;i<n;i++){
		printf("%i ",vetor[i]);
	}
	printf("\n%i\n",quant);
	if(quant){
		sort(meta,meta + quant);
		for (int i = 0; i < quant; i++){
			printf("%i ",meta[i]);
		}
		printf("\n");
	}

}
