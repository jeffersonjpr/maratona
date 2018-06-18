/*
#include <bits/stdc++.h>
using namespace std;

int main(){
	set <int> falta;
	int n,at;
	scanf(" %i",&n);
	for(int i = 0;i < n;i++){
		scanf(" %i",&at);
		falta.insert(at);
	}
	at = falta.size();
	printf("%i\n",at);
}
*/
//Vetor menor que 10⁸, da pra usar o codigo abaixo 

#include <bits/stdc++.h>
using namespace std;
bool v[100000001];

int main(){
	int n,at,ct = 0;
	scanf(" %i",&n);
	for(int i = 0;i<n;i++){
		scanf(" %i",&at);
		if(v[at] != 1){
			v[at] = 1;
			ct++;
		}
	}
	printf("%i\n",ct);
}
