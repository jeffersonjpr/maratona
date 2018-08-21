#include <bits/stdc++.h>
using namespace std;

int hanoi(int n){
	return pow(2,n) - 1;
}

int main(){
	int n,ct = 1;
	while (true){
		cin >> n;
		if(n ==0) break;
		printf("Teste %i\n%i\n\n",ct,hanoi(n));
		ct++;
	}
}
