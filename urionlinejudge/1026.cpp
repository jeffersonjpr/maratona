#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned int a,b;
	while(scanf("%u%u",&a,&b) != EOF){
		a = a ^ b; //operador binario
		printf("%u\n",a);
	}
}

/*
string cnbin(long long a){
	string ba("00000000000000000000000000000000");
	int cont = (int)sqrt(a);
	long long n;
	for(long long i = 31 - cont; cont >= 0; cont--,i++){
		n = pow(2,cont);
		if(n <= a){
			ba[i] = '1';
			a -= n;
		}
	}
	return ba;
}

long long mofiz(string a,string b){
	long long resp = 0;
	for(int i = 31; i > -1; i--){
		if(a[i] != b[i]) a[i] = '1';
		else a[i] = '0';
	}
	for(int i = 0; i < 32; i++){
		if(a[i] == '1') resp += pow(2,(31-i));
	}
	return resp;
}
int main(){
	long long x,y;
	while(true){
		scanf("%lli%lli",&x,&y);
		if(x == -1 or y == -1) break;
		printf("%lli\n",mofiz(cnbin(x),cnbin(y)));
	}

}
*/
