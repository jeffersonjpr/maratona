#include <bits/stdc++.h>
using namespace std;

char mat[1003][1003];
int n,m;
int dfs(int i, int j){
	int maximo = 0, count = 1;
	if(mat[i][j] == 3){
		return cont + 1;
	};
	mat[i][j] = 5;
	if(j+1 < m && (mat[i][j+1] == 1 || mat[i][j+1] == 3)){
		count += dfs(i,j+1);
		if(count > maximo) maximo = count;
	}
	if(j-1 >= 0 && (mat[i][j-1] == 1 || mat[i][j-1] == 3)){
		count += dfs(i,j-1);
		if(count > maximo) maximo = count;
	}
	if(i+1 < n && (mat[i+1][j] == 1 || mat[i+1][j] == 3)){
		count += dfs(i+1,j);
		if(count > maximo) maximo = count;
	}
	if(i-1 >= 0 && (mat[i-1][j] == 1 || mat[i-1][j] == 3)){
		count += dfs(i-1,j);
		if(count > maximo) maximo = count;
	}
}
int main(){
	int maior;

	scanf("%i%i",&n,&m);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> mat[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(mat[i][j] == 2){
				maior = dfs(i,j,1);
			}
		}
	}
	printf("%i\n",maior);
}
