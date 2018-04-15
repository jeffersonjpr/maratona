#include <iostream>
using namespace std;

int main(){
	int nb,nd,x,y,z,a = 1;
	while(true){
		a = 1;
		cin >> nb >> nd;
		if(nb == 0 and nd == 0){
			break;
		}
		int b[nb + 1];
		cin >> b[1] >> b[2] >> b[3];
		for(;nd > 0;nd--){
			 cin >> x >> y >> z;
			 if(b[x] < z){
				 printf("N\n");
				 a = 0;
				 break;
			 }

			 b[x] -= z;
			 b[y] += z;
		}
		if(a)printf("S\n");
	}
}
