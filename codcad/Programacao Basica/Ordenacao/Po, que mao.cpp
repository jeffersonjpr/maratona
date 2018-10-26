#include <bits/stdc++.h>
using namespace std;

int main(){
	int n[4],a = 0;
	for(int i = 0;i<4;i++){
		scanf("%i",&n[i]);
	}
	sort(n+1,n+4);
	for(int i = 1;i<4;i++){
		if(n[0] >= n[i]){ //esqueci da possibilidade de ser igual.
			n[0] -= n[i];
			a++;
		}
		else break;
	}
	printf("%i\n",a);

}
