#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a=0,b;
	int c;
	for(int i = 0;i < 3;i++){
		cin >> b;
		a += pow(b,2);
	}
	cin >> c;
	c*=2;
	a = sqrt(a);

	if (a <= c) printf("S\n");
	else printf("N\n");

}
