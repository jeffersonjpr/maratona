#include <bits/stdc++.h>

using namespace std;

string title(string F){
	bool rule = 1;
	for(int i = 0; i < F.length();i++){
		if(rule){
			if(F[i] > 96){
				F[i] -= 32;
				rule = 0;
			}
			else rule = 0;
		}
		else{
			if(F[i] == 32) rule = 1;
			else{
				if(F[i] < 96)F[i] += 32;
			}
		}

	}
	return F;
}

int main(){
	string F;

	getline(cin, F);

	cout<<title(F)<< endl;
}
