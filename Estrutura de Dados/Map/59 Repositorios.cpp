#include <bits/stdc++.h>
using namespace std;

int main(){
	map <int,int> a,b;
	map <int,int>::iterator it,it2;
	int a1,b1,r1,r2;
	scanf(" %i %i",&a1,&b1);
	for(int i =0;i<a1;i++){
		scanf(" %i %i",&r1,&r2);
		a[r1] = r2;
	}
	for(int i =0;i<b1;i++){
		scanf(" %i %i",&r1,&r2);
		if(b.find(r1) != b.end()){
			if(b[r1] < r2) b[r1] = r2;
		}
		else {
			it = a.find(r1);
			if(it != a.end()){
				if(it -> second < r2)
					b[r1] = r2;
			}
			else{
				b[r1] = r2;
			}
		}
	}
	for(it=b.begin();it != b.end();it++){
		printf("%i %i\n",it ->first,it -> second);

	}

}
