#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cin >> a >> b;
    c = (a+b)/2;
    if (c >= 7){
        printf("Aprovado");
    }
    else if(c < 7 and c >= 4){
        printf("Recuperacao");
    }
    else{
        printf("Reprovado");
    }
    
}
