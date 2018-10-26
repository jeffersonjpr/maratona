#include <bits/stdc++.h>
using namespace std;

int main(){
	long long h1,h2,h3,resp;
	scanf("%llx%llx%llx",&h1,&h2,&h3);
	resp = pow(h1/h2,2);
	resp = 1 + resp * pow(h2/h3,2) + resp;
	printf("%llx\n",resp);
}
