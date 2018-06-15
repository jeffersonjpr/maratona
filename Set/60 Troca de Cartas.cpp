#include <bits/stdc++.h>
using namespace std;
//treinando set
int main(){
	int x,y,segura;
	set <int> s;
	set <int> j;
	scanf(" %d %d",&x,&y);
	for(int i = 0;i<x;i++){
		scanf(" %i",&segura);
		s.insert(segura);
	}
	for(int i = 0;i<y;i++){
		scanf(" %i",&segura);
		j.insert(segura);
	}
	x = 0;
	y = 0;
	for(auto it = s.begin(); it != s.end(); it++){
		if(j.find(*it) == j.end()) x++;
	}
	for(auto it = j.begin(); it != j.end(); it++){
		if(s.find(*it) == s.end()) y++;
	}
	printf("%i\n",min(x,y));
}

/*
Forma mais eficiente voltada para maratona
#define T 100001
bool a[T],b[T];
int main(){
	int x,y,z,alice = 0,beatriz = 0;
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
*/
