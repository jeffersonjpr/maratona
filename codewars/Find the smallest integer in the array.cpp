#include <vector>
using namespace std;

int findSmallest(vector <int> list){
    if(list.size() == 1) return list.front();
    int jay = list.front();
    for(int i = 1;i < list.size();i++){
        if(list[i] < jay) jay = list[i];
    }
  return jay;
}

//https://www.codewars.com/kata/find-the-smallest-integer-in-the-array/cpp
