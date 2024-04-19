// modulo properties

// a%n --> [ 0 --> (n-1)]
// print ans modulo 10^9 + 7

// PROPERIES

// ( a + b ) % m = a % m + b % m
// a % m - b % m = ( a - b ) % m
// a % m * b % m = ( a * b ) % m


// Fast Power
#include<iostream>
#include<vector>
using namespace std;

int modularExponential(int x,int n){
    int res = 1;

    while(n>0){
        if(n&1){
            //odd
            res = (1LL*(res) * (x)%n)%n;
        }
        x = (1LL*(x)%n * (x)%n)%n;
        n = n>>1;
    }

    return res;
}

int main(){
    
    return 0;
}