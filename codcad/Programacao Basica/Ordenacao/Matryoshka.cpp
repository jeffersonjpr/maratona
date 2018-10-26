#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,quant = 0,meta[100004],checa[100004],result[100004];
	scanf(" %i",&n);
	for(int i = 0;i<n;i++){
		scanf(" %i",meta + i);
		checa[i] = meta[i];
	}
	sort(checa, checa + n);

	for (int i = 0; i < n; i++){
		if(meta[i] != checa[i]){
			result[quant] = meta[i];
			quant++;
		}
	}
	if(quant){
		printf("%i\n",quant);
		sort(result,result + quant);
		for(int i = 0; i< quant; i++){
			printf("%i ",result[i]);
		}
		printf("\n");
	}
	else printf("%i\n\n",quant);


}
