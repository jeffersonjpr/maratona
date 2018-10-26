#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a;
	double b;
	cin >> a;
	for(;a > 0;a--){
		cin >> b;
		printf("%.4f\n",sqrt(b));
	}
}
