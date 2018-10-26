#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 1,b,lista[91];
	bool chave = true,key[91] = {false};
	while(true){
	    chave = true;
	    for(int ct = 0;ct <= 90;ct++) {key[ct] = false;}

		cin >> n >> b;
		if(n == 0 && b == 0) break;

		for(int ct = 0;ct < b;ct++) cin >> lista[ct];

		for(int ct = 0;ct <= n;ct++){
			for(int ct1 = 0;ct1 < b;ct1++){
				if(key[ct] == true) break;
				for(int ct2 = ct1;ct2 < b;ct2++){
					if(abs(lista[ct1] - lista[ct2]) == ct){
						key[ct] = true;
						break;
					}
				}
			}
		}
		for(int ct = 0;ct <= n;ct++){
			if(!key[ct]){
				chave = false;
				break;
			}
		}

		if(chave) printf("Y\n");
		else printf("N\n");

	}
}
