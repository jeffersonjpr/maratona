#include <iostream>
using namespace std;

int main(){
	int nb,nd,x,y,z,b[21],regra = 1;
	while(true){
		regra = 1;
		cin >> nb >> nd;
		if(nb == 0 and nd == 0) break;
		for(int ct = 1;ct <= nb;ct++) cin >> b[ct];
		for(;nd > 0;nd--){
			cin >> x >> y >> z;
			b[x] -= z;
			b[y] += z;
		}
		for(int ct = 1;ct <= nb;ct++) if(b[ct] < 0) regra = 0;
		if(regra) printf("S\n");
		else printf("N\n");
	}
}
