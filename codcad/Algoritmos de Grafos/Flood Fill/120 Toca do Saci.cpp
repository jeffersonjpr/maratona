#include <bits/stdc++.h>
using namespace std;

int mat[1003][1003];
int n,m,resposta;

void dfs(int i, int j,int resp){
	if(mat[i][j] == 3){
		cout << resp << endl;
		exit(0);
	}

	mat[i][j] = 0;
	if((i + 1) < n && mat[i + 1][j] != 0){
		dfs(i+1,j,resp + 1);
	}
	if((i - 1) >= 0 && mat[i - 1][j] != 0){
		dfs(i-1,j,resp + 1);
	}
	if((j + 1) < m && mat[i][j + 1] != 0){
		dfs(i,j+1,resp + 1);
	}
	if((j - 1) >= 0 && mat[i][j - 1] != 0){
		dfs(i,j-1,resp + 1);
	}
}

int main(){
	int ii,ji;

	scanf("%i%i",&n,&m);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%i",&mat[i][j]);
			if(mat[i][j] == 2){
				ii = i;
				ji = j;
			}
		}
	}
	dfs(ii,ji,1);
}
