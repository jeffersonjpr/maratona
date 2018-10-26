#include <bits/stdc++.h>

// int contabits(int n){
// 	int cont = 0;
// 	for(;n ; n >>= 1){
// 		if(n & 1) cont++;
// 	}
// 	return cont;
// }
// mais eficente vvv
int contabits(int n){
	int cont = 0;
	while(n){
		n -= n & -n;
		cont++;
	}
	return cont;
}

int main(){
	int n;
	scanf("%i",&n);
	printf("%i\n",contabits(n));
}
