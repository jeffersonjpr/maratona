#include <iostream>

using namespace std;

bool eh_primo(int x){
	for(int i = 0;i<x;i++){
		if(x (float)i == 0) return false;
	}
	return true;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		printf("S\n");
	}else{
		printf("N\n");
	}
}
