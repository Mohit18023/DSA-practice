// find sqrt using binary search

// using Brute force approach 
// start a loop from 0 to n-1 and check if i*i == key if it is then we found the sqrt otherwise we need a number closest to sqrt

#include<iostream>
#include<vector>

using namespace std;

int sqrt(int n){
    int s =0;
    int e = n-1;
    // we have to use long log int becuse if we use int the bigger values i.e near 2^31 will multiply by itself to check the condition and the result will be out of int range and will raise an error
    long long int mid = s + ( e - s) / 2 ;
    int ans = -1;
    while(s<=e){
        long long int square = mid * mid;
        if (square == n){
            ans = mid;
            return ans;
        }
        else if (square < n)
        {
            s = mid + 1;
            ans = mid;
        }
        else
        {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int square;
    cout<<"Enter the square value: ";
    cin>>square;

    int root = sqrt(square);
    if (root != -1)
        cout<<"The square root is "<<root<<endl;
    else
        cout<<"Square Root not found" ;

    return 0;

}