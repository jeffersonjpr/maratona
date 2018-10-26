#include <string>
#include <bits/stdc++.h>
using namespace std;
//nao ta funcionando

string pig_it(string str){
    int n = str.length()*2,chave = 1,chave2 = 1,cont = 1;
    string resp;
    char hold;
    for(int i = 0; i <= str.length(); i++){
        if(str[i] == '!' or str[i] == '?'){
            resp.push_back(str[i]);
            chave2 = 0;
            continue;
        }
        if(str[i] == ' '){
            if(i + 1 < str.length() and str[i+1] != ' '){
                resp.push_back(hold);
                resp.push_back('a');
                resp.push_back('y');
                for(int j = 0; j < cont; j++){
                    resp.push_back(str[i]);
                }
                chave = 1;
                cont = 1;
                continue;
            }
            cont++;
            continue;
        }
        if(str[i] == '\0'){
            if(chave2){
                resp.push_back(hold);
                resp.push_back('a');
                resp.push_back('y');
            }
            break;
        }
        chave2 = 1;
        if(chave){
            hold = str[i];
            chave = 0;
            continue;
        }

        resp.push_back(str[i]);
    }
    return resp;
}


int main(){
    string x;
    getline(cin,x);
    x= pig_it(x);
    cout << x;
}
