#include <bits/stdc++.h>
using namespace std;
int j = 0;
int col(int n){
	if(n == 1) return 0;
	else if (n % 2 == 0){
		j++;
		return col(n/2);
	}
	else{
		j++;
		return col(3*n+1);
	}
}

int main(){
	int n;
	cin >> n;
	col(n);
	printf("%i\n",j);
}
