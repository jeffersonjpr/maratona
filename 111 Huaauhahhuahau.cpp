#include <bits/stdc++.h>
using namespace std;

int main(){
	string x,y,z;
	cin >> x;

	for(char & a:x){
		if(a == 'a' or a == 'e' or a == 'i' or a =='o' or a == 'u'){
			printf("%s\n",a);
			y+=a;
			printf("%s\n",y);
		}
	}
	printf("%s\n",y);

	for(int i = 0;i < x.size();i++){
		if(x[i] == 'a' or x[i] == 'e' or x[i] == 'i' or x[i] =='o' or x[i] == 'u'){
			y+=x[i];
		}
	}
	for(int i = (x.size())-1;i >= 0;i++){
		if(x[i] == 'a' or x[i] == 'e' or x[i] == 'i' or x[i] =='o' or x[i] == 'u'){
			z+=x[i];
		}
	}
	printf("%s\n",y);
	printf("%s\n",z);
}
