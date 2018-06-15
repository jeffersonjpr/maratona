#include <bits/stdc++.h>
using namespace std;

/*
int main(){
	int s,place,ct=0;
	set <int> est;
	scanf(" %d",&s);
	for(int i = 0;i < s;i++){
		scanf("%d",&place);
		if(est.find(place) == est.end()){
			ct+=2;
			est.insert(place);
		}
		else{
			est.erase(place);
		}
	}
	printf("%i\n",ct);
}
*/

int main(){
	int s,ct = 0,place;
	bool taco[1000001]={0};
	scanf(" %i",&s);
	for(int i = 0;i<s;i++){
		scanf(" %d",&place);
		if(not taco[place]){
			ct+=2;
			taco[place] = 1;
		}
		else{
			taco[place] = 0;
		}
	}
	printf("%i\n",ct);
}
