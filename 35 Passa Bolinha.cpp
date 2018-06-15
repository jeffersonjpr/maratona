#include <bits/stdc++.h>
using namespace std;
int v[105][105];
void dfs(int x,int y){
	int x1 = v[x][y];
	v[x][y] = -1;
	if(v[x][y+1] >= x1 and v[x][y+1] != 0){
		dfs(x,y+1);
	}
	if(v[x-1][y] >= x1 and v[x-1][y] != 0){
		dfs(x-1,y);
	}
	if(v[x][y-1] >= x1 and v[x][y-1] != 0){
		dfs(x,y-1);
	}
	if(v[x+1][y] >= x1 and v[x+1][y] != 0){
		dfs(x+1,y);
	}
}
int main(){
	int n,x,y;
	scanf("%d %d %d",&n,&x,&y);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			scanf(" %d",&v[i][j]);
		}
	}

	dfs(x,y);

	x = 0;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(v[i][j] == -1) x++;
		}
	}

	printf("%i\n",x);

}
