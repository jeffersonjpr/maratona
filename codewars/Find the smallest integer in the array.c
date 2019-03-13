#include <stddef.h>

int find_smallest_int(int *vec, size_t len){
    if(len == 1) return *vec;
    int a = *vec;
    for(int i = 1; i < len; i++){
        if(*(vec + i) < a) a = *(vec + i);
    }
    return a;
}

//https://www.codewars.com/kata/find-the-smallest-integer-in-the-array/cpp
