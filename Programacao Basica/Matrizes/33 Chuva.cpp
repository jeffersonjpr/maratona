#include <iostream>
using namespace std;

int main(){
	int n[100][100]={0},x,a;
	cin >> x;
	for(int h = 0;h < 2;h++){
		for(int i = 0;i < x;i++){
			for(int j = 0;j < x;j++){
				cin >> a;
				n[i][j]+=a;
			}
		}
	}
	for(int i = 0;i < x;i++){
		for(int j = 0;j < x;j++){
			cout << n[i][j] << " ";
		}
		cout << endl;
	}
}
