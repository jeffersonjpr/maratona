#include <bits/stdc++.h>
using namespace std;

int main(){
	int mapa[100005],v[50001],x,y,atual;
	scanf("%d",&x);
	for(int i = 0;i < x;i++){ //primeiro
		scanf("%d",&atual);
		v[i]=(atual);
		mapa[atual] = i;
	}
	scanf("%i",&y);
	for(int i = 0;i < y;i++){
		scanf("%i",&atual);
		v[mapa[atual]] = 0;
	}
	for(int i = 0; i<x;i++){
		if(v[i] != 0) printf("%i ",v[i]);
	}

}
