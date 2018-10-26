#include <iostream>
using namespace std;

int main (){
	string tel;
	cin >> tel;
	for(char & x : tel){
		if(x < 65) continue;
		else if(x < 68) x = '2';
		else if(x < 71) x = '3';
		else if(x < 74) x = '4';
		else if(x < 77) x = '5';
		else if(x < 80) x = '6';
		else if(x < 84) x = '7';
		else if(x < 87) x = '8';
		else x = '9';
	}
	cout << tel << endl;
}
