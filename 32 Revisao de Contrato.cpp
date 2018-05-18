#include <iostream>
using namespace std;

int main(){
	string a,b;
	bool key = 0;
	while(true){
		key = 0;
		cin >> a >> b;
		if(a[0] == '0') break;
		for(char & x : b){
			if(x == a[0]) x='j';
		}
		a = "";
		for(int i = 0;i < b.size();i++){
			if(b[i] != '0' and b[i] != 'j') key = 1;
			if(key and b[i] != 'j') cout << b[i];
		}
		if(!key) cout << '0';
		cout << endl;
	}
}
