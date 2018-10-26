#include <iostream>
using namespace std;
bool pr[100005];

bool eh_primo(int x){
	for(int i = 2;i<x;i++){
		if(not pr[i])
			for(int j = i;j<=x;j+=i){
				pr[j] = 1;
			}
	}
	return pr[x];
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x) == 0){
		printf("S\n");
	}else{
		printf("N\n");
	}
}
