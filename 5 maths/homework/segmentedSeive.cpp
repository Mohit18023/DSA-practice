// Read about segmented seive and code it
// C++ program for segmented sieve when the input number is given
#include <iostream>
#include<algorithm>
#include <vector>
#include <cmath>
#include<cstring>
using namespace std;

// Function to find all prime numbers in a given range
// using segmented sieve
void getPrimes(vector<int>& prime, int R){
    vector<bool> isprime(R+1,true);
    isprime[0] = isprime[1] = false;

    // now loop through all the numbers to get the prime numbers
    for(int i=2;i*i<=R;i++){
        if(isprime[i]){
            // now if the number is prime then we will mark all the multiples of the number as false
            for(int j=i*i;j<=R;j+=i){
                isprime[j] = false;
            }

        }

    }

    // now we will get all the prime numbers in the range
    for(int i=2;i<=R;i++){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
}

void Segmented_Sieve(int L, int R){
    vector<bool> isprime(R-L+1, true);
    vector<int> prime;

    // get the prime numbers till sqrt(R)
    getPrimes(prime, sqrt(R));

    // now we will mark all the multiples of the prime numbers as false
    for(int i = 0;i<prime.size();i++){
        int low = (L/prime[i])*prime[i];
        if(low<L){
            low+=prime[i];
        }
        if(low == prime[i]){
            low+=prime[i];
        }
        for(int j=low;j<=R;j+=prime[i]){
            isprime[j-L] = false;
        }
        
    }

    // now we will print all the prime numbers in the range
    for(int i=0;i<=R-L;i++){
        if(isprime[i]){
            cout<<i+L<<endl;
        }
    }
}
int main()
{
    // DRIVER CODE
    // low must greater than or equal to 2
    // L is the lower limit
    // R is the upper limit
    int L = 110;
    int R = 130;
    // Calling for segment of sieves to get the answer
    Segmented_Sieve(L, R);
}
