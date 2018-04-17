#include <iostream>
using namespace std;

int main(){
	bool rule;
	int n,b,valor;
	while(true){
		rule = 1;
		cin >> n >> b;
		if(n == 0 && b == 0) break;
		int lista[b];
		for(int ct =0;ct < b;ct++) cin >> lista[ct];
		for(int ct5 =1;ct5 < n+1;ct5++){
			for(int ct2=0;ct2 < b;ct2++){
				if(rule == 0) break;
				for(int ct3=0;ct3 <b;ct3++){
					valor = abs(lista[ct2] - lista[ct3])
					if(valor == ct5){
						rule = 0;
						break;
					}
				}
			}
			if(rule == true) break;
		}
		if(rule == true) printf("N\n");
		else printf("Y\n");

	}
}
