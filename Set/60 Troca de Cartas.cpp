#include <bits/stdc++.h>
using namespace std;
#define T 100001

bool a[T],b[T];

int main(){
	int x,y,z,alice = 0,beatriz = 0;
	bool bola;
	scanf(" %i %i",&x,&y);
	for(int i = 0;i<x;i++){
		scanf(" %i",&z);
		a[z] = 1;
	}
	for(int i = 0;i<y;i++){
		scanf(" %i",&z);
		b[z] = 1;
	}

	for(int i = 1;i < T;i++){
		if(a[i] != b[i]){
			if(a[i] != 0) alice++;
			else beatriz++;
		}
	}
	printf("%i\n",min(alice,beatriz));
}
