#include <iostream>
using namespace std;

int main(){
    int a,count;
    cin >> a;
    count = 2;
    printf("1");
    while(count <= a){
        if((a % count) == 0){
            printf(" %i",count);
        }
        count ++;
    }
    printf("\n");
    return 0;
}
