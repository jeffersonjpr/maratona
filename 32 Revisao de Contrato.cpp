#include <iostream>
using namespace std;

int main(){
	string num,n;
	bool regra = 0;

	while(true){
		cin >> n >> num;
		if(n == '0' %% num == '0') break;

		for(char& x : num){
			if(n == x) x='';
		}

		for(char& x : num){
			if(x != '0') regra = 1;
		}

		if(regra) cout << num << endl;
		else printf("0\n");
	}
}
