#include <iostream>
using namespace std;

int main(){
	int x,z=0;
	cin >> x;
	int lista[x];
	for(int ct =0;ct < x;ct++) {
		cin >> lista[ct];
		z+= lista[ct];
	}
	z /= 2;
	for(int ct = 0;ct < x;ct++) {
		z -= lista[ct];
		if(z == 0){
			printf("%i\n",ct+1);
			break;
		}
	}
}
