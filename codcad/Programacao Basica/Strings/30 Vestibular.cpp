#include <iostream>
using namespace std;

int main (){
	string nota1,nota2;
	int n,re=0;
	cin >> n >> nota1 >> nota2;
	for(int i = 0;i < n;i++){
		if(nota1[i] == nota2[i]) re++;
	}
	cout << re << endl;
}
