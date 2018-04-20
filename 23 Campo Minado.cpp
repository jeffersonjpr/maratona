#include <iostream>
using namespace std;

int main(){
	int camp;
	cin >> camp;
	bool regra[camp];
	int campf[camp] = {0};
	for (int ct = 0;ct < camp;ct++) cin >> regra[ct];
	if(regra[0]){
		campf[1] += 1;
		campf[0] += 1;
	}
	if(regra[camp - 1]){
		campf[camp - 2] += 1;
		campf[camp - 1] += 1;
	}
	for (int ct = 1;ct < camp-1;ct++){
		if(regra[ct]){
			campf[ct-1] += 1;
			campf[ct] += 1;
			campf[ct+1] += 1;
		}
	}
	for (int ct = 0;ct < camp;ct++) printf("%i\n",campf[ct]);
}
