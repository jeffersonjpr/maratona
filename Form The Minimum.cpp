#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

unsigned long long minValue (vector <int> values){
    unsigned long long resp = 0;

    sort(values.begin(),values.end());
    values.erase(unique(values.begin(),values.end()),values.end());

    for(int i = 0;i < values.size();i++){
        resp += values[i] * pow(10,values.size()-i); //eleva 10 ao tamnho do vector - variavel
    }
    return resp/10;
}

//https://www.codewars.com/kata/form-the-minimum/cpp
