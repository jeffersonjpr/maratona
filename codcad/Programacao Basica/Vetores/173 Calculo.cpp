#include <iostream>
using namespace std;

int main(){
	int x,y,z = 0,pch,a[1011] = {0},b[1011] = {0},regra = 1;
	cin >> x >> y;
	if(x > y) z = x;
	else z = y;

	for(int i = 1;i < x+1;i++) {
		cin >> a[i];
		if(regra) if(a[i] == 1) regra = 0;
	}
	for(int i = 1;i < y+1;i++){
		cin >> b[i];
		if(regra) if(a[i] == 1) regra = 0;
	}
	for(int i = z;i >= 1;i--){
		if(a[i] + b[i] == 0) a[i] = 0;
		else if(a[i] + b[i] == 1) a[i] = 1;
		else if(a[i] + b[i] == 2){
			a[i] = 0;
			a[i-1] += 1;
		}
		else{
			a[i] = 1;
			a[i-1] += 1;
		}
	}
	if(regra) return 0;

	for(int i = 1010;i >= 0;i--){
		if(a[i] == 1){
			pch = i;
			break;
		}
	}

	if(a[0] == 0){
		for (int i = 1; i < pch; i++) {
			printf("%i ",a[i]);
		}
		printf("%i\n",a[pch]);
	}
	else{
		for (int i = 0; i < pch; i++) {
			printf("%i ",a[i]);
		}
		printf("%i\n",a[pch]);
	}

}
