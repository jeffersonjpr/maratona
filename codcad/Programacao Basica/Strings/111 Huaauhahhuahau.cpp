#include <bits/stdc++.h>
using namespace std;

int main(){
	int c = 0,j,j1=0;
	//shame
	string pal,s="00000000000000000000000000000000000000000000000000",d="00000000000000000000000000000000000000000000000000";
	//shame
	cin >> pal;
	j = pal.size();
	for(int i = 0; i <= pal.size();i++){
		if(pal[i] == 'a' or pal[i] == 'e' or pal[i] == 'i' or pal[i] == 'o' or pal[i] == 'u'){
			s[c]=pal[i];
			c++;
		}
		if(pal[j] == 'a' or pal[j] == 'e' or pal[j] == 'i' or pal[j] == 'o' or pal[j] == 'u'){
			d[j1]=pal[j];
			j1++;
		}
		j--;
	}

	if(s == d) cout << 'S' << endl;
	else cout << 'N' << endl;
}
