#include <iostream>
using namespace std;

int main(){
	bool rule;
	int n,b,lista[91],res[91] = {93};

	while(true){
		rule = 1;
		cin >> n >> b;
		if(n == 0 && b == 0) break;
		for(int ct =0;ct < b;ct++) cin >> lista[ct];

		if(rule) printf("N\n");
		else printf("Y\n");

	}
}
