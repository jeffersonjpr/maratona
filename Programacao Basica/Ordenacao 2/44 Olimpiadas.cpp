#include <bits/stdc++.h>
using namespace std;

struct Medalha{
	int pais,ouro,prata,bronze;
};

bool compara(Medalha x, Medalha y){ //t = troca
	if(x.ouro != y.ouro) return x.ouro > y.ouro;
	else if(x.prata != y.prata) return x.prata > y.prata;
	else if(x.bronze != y.bronze) return x.bronze > y.bronze;
	else return x.pais < y.pais;
}
int main(){
	Medalha ct[103]={0};
	int n,m,o,p,b;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){ //atribui os paises
		ct[i].pais = i;
	}

	for(int i = 0;i < m;i++){
		cin >> o >> p >> b;
		ct[o].ouro++;
		ct[p].prata++;
		ct[b].bronze++;
	}
	sort(ct+1,ct+n+1,compara);
	for(int i = 1;i < n;i++){
		cout << ct[i].pais << " ";
	}
	cout << ct[n].pais << endl;
}
