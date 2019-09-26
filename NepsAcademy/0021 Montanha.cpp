#include <bits/stdc++.h>
using namespace std;

//g++  0021 Montanha.cpp
// aceito 100%
int main(){
	int n; //quantidade de medidas
	int vale[3]; //vetor de verificaçao de vale Ex [3,1,3]
	scanf("%i",&n);

	scanf("%i%i\n",&vale[0], &vale[1]);
	for(int i =0; i < n-2; i++){
		scanf("%i",&vale[2]); //lendo uma medida
		if(vale[0] > vale[1] && vale[1] < vale[2]){ //verificando se ha um vale
			printf("S\n");
			exit(0);
		}
		vale[0] = vale[1];
		vale[1] = vale[2];
	}
	printf("N\n");
}
