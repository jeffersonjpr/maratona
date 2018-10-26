#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,vet[2],y;
	scanf("%i",&n);
	for(int i = 0; i < n; i++){
		scanf("%i%i",&vet[0],&vet[1]);
		sort(vet,vet+2);
		y = 0;
		for(int j = (vet[0] + 1); j < vet[1]; j++){
			if(j % 2 == 1) y += j;
		}
		printf("%i\n",y);
	}

}
