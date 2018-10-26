#include <bits/stdc++.h>
using namespace std;

int main(){
    int vetor[100002],n;
    scanf("%i",&n);
    for(int i = 0;i<n;i++){
        scanf("%i",vetor + i);
    }
    sort(vetor,vetor+n);
    for(int i = 0;i<n;i++){
        printf("%i ",*(vetor + i));
    }
}


// usando vector
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n,x;
    scanf("%i",&n);
    for(int i = 0;i<n;i++){
        scanf("%i",&x);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<n;i++){
        printf("%i ",v[i]);
    }
}
*/
