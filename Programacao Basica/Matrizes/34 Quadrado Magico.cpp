#include <iostream>
using namespace std;

int check(int s, int n){
	if(s != n){
		printf("-1\n");
		exit(0);
	}
}

int main(){
	int n[10][10],x,aux,soma = 0;
	cin >> x;
	for(int i = 0;i<x;i++){
		for(int j = 0;j<x;j++){
			cin >> aux;
			n[i][j] = aux;
		}
	}
	aux = 0;
	for(int j = 0;j<x;j++){ //primeira linha auxiliar
		soma += n[0][j];
	}
	for(int i = 1;i<x;i++){ //linhas com tirando a primeira
		for(int j = 0;j<x;j++){
			aux += n[i][j];
		}
		check(aux,soma);
		aux = 0;

	}
	for(int i = 0;i<x;i++){ //colunas
		for(int j = 0;j<x;j++){
			aux += n[j][i];
		}
		check(aux,soma);
		aux = 0;
	}
	for(int j = 0;j<x;j++){ //diagonal principal
		aux += n[j][j];
	}
	check(aux,soma);
	aux = 0;
	for(int i = 0;i<x;i++){ //diagonal secundaria
		for(int j = 0;j<x;j++){
			if(i+j == x-1) aux += n[i][j];
		}
	}
	check(aux,soma);
	printf("%i\n",aux);

}
