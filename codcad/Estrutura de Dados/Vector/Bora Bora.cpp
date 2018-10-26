//NAO ESTA PRONTO !!!!!
#include <bits/stdc++.h>
using namespace std;


int main(){
	//vector de vector de pair para representar a mao dos jogadores;
	vector< vector< pair<int,int> > > mao;
	int p,m,n,xs,ss,xd,sd;
	//xs e ss é o valor e o naipe da carte de saque
	//xd e sd é o valor e o naipe da carta do topo de descarte
	scanf("%i%i%i",&p,&m,&n);
	mao.resize(p);
	for(int i = 0; i < p; i++){
		for(int j = 0; j < m; j++){
			scanf("%i%i",&xs,&ss);
			mao[i].push_back(make_pair(xs,ss));
		}
	}
	for(int i = 0; i < p; i++){
		for(int j = 0; j < m; j++){
			printf("%i:%i ",mao[i][j].first,mao[i][j].second);
		}
		printf("\n");
	}

}
