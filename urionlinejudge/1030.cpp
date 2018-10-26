#include <bits/stdc++.h>
using namespace std;
bool vet[10005];

int main(){
	int nc,n,k;
	scanf("%i",&nc);
	for(int i = 1; i <= nc; i++){
		scanf("%i%i",&n,&k);
		memset(vet,1,n+1);
		for(int j = 1; j < n; j++){
			if((j + k) < n) vet[j + k - 1] = 0;
			else{
				vet[j+k-n] = 0
			}
		}
		for(int j = 1; j < n; j++){
			if(vet[j]) olprintf("Case %i: %i\n",i,j);
		}
	}
}
