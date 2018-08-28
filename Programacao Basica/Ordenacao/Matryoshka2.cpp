#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,quant = 0,meta[10],vetor[10];
	scanf(" %i",&n);
	for(int i = 0;i<n;i++){
		scanf(" %i",vetor + i);
	}

	for (int i = 0; i < n - 1; i++){
		if(vetor[i] > vetor[i+1]){
			meta[quant] = vetor[i];
			quant++;
		}
	}
	if(quant) sort(meta,meta + quant);
	printf("%i\n",quant);
	if(quant){
		for(int i = 0; i< quant; i++){
			printf("%i ",meta[quant]);
		}
		printf("\n");
	}

}
