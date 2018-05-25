#include <bits/stdc++.h>
using namespace std;
int pil[102][102];
typedef pair<int,int> ii;
bool ajeita(ii x,ii y){
	if(x.first != y.first) return x.first > y.first;
	else return x.second < y.second;
}

int main(){
	int g,p,posi,pont[101],s,ka;

	while(true){
		cin >> g >> p;
		if(g == 0) break;
		memset(pil, 0, sizeof pil);
		for(int i = 1;i <= g;i++){
			for(int j = 1;j <= p;j++){
				cin >> pil[i][j];
			}
		}

		pair<int,int> v[101];

		cin >> s;
		for (int i =0;i<s;i++){
			memset(pont, 0, sizeof(pont));
			memset(v, 0, sizeof(v));
			cin >> ka;
			for(int j = 1;j<=ka;j++){
				cin >> pont[j];
			}

			for(int j = 1;j <= p;j++){
				v[j].second = j;
				for(int k = 1;k <= g;k++){
					v[j].first += pont[pil[k][j]];
				}
			}
			sort(v+1,v+p+1,ajeita);

			printf("%i",v[1].second);
			posi = v[1].first;
			for(int j = 2;j <= p;j++){
				if(v[j].first == posi){
					printf(" %i",v[j].second);
				}
				else{
					break;
				}
			}
			printf("\n");

		}
	}
}
