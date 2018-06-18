#include <bits/stdc++.h>
using namespace std;

int main(){
  pair<int,int> x[4];
  for (int i = 1;i < 4; i++){
    cin >> x[i].first;
    x[i].second = i;
  }
  sort(x+1,x+4);
  for (int i = 1; i < 4; i++){
    printf("%d\n",x[i].second);
  }
}
