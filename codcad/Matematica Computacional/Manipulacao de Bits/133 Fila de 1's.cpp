#include <bits/stdc++.h>
// int main(){
// 	int n;
// 	scanf("%i",&n);
// 	for(;n;n>>=1){
// 		if(!(n & 1)){
// 			printf("N\n");
// 			return 0;
// 		}
// 	}
// 	printf("S\n");
// 	return 0;
// }
int main(){
	int n;
	scanf("%i",&n);
	if(n == 0){
		printf("N\n");
		return 0;
	}
	n++;
	n -= n & -n;
	if(!n) printf("S\n");
	else printf("N\n");
}
