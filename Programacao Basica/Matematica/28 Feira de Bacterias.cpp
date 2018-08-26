#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c,pos=0;
	double max =0.0,min = 0.0;
	cin >> a;
	for(int ct = 0;ct < a;ct++){
		cin >> b >> c;
		min = log2(b) * c;
		if(min > max){
			max = min;
			pos = ct;
		}
	}
	printf("%i\n",pos);

}
