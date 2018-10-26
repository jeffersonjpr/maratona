#include <bits/stdc++.h>
using namespace std;
unsigned short int euclides(unsigned short int a,unsigned short  int b){
	if(b == 0) return a;
	return euclides(b,a%b);
}
int main(){
	unsigned short int a,b,n;
	scanf("%hu",&n);
	for(unsigned short int i = 0; i<n; i++){
		scanf("%hu %hu",&a,&b);
		printf("%hu\n",euclides(a,b));
	}
}
