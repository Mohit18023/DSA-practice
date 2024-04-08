// find sqrt using binary search

// using Brute force approach
// start a loop from 0 to n-1 and check if i*i == key if it is then we found the sqrt otherwise we need a number closest to sqrt

#include <iostream>
#include <vector>

using namespace std;

int sqrtInteger(int n)
{
    int s = 0;
    int e = n - 1;
    // we have to use long log int becuse if we use int the bigger values i.e near 2^31 will multiply by itself to check the condition and the result will be out of int range and will raise an error
    long long int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
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
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
float sqrt(int integer,int key){
    float value=integer;
    for(float i=integer;i<integer+1;i=i+0.1){
        if(i*i <= key){
            value = i;
        }
    }
    
    for(float i=value;i<value+0.09;i=i+0.01){
        if(i*i <= key){
            value = i;
        }
    }
    
    return value;
    
}

double morePrecise(int n, int precision, int temSoln){
    double factor = 1;
    double ans = temSoln;
    for(int i=0;i<precision;i++){
        factor = factor/10;

        for(double j = ans; j*j<n;j=j+factor){
            ans = j;
        }
    }

    return ans;
}

int main()
{
    int square;
    cout << "Enter the square value: ";
    cin >> square;

    int rootInt = sqrtInteger(square);
    float root = sqrt(rootInt,square);
    double precision = morePrecise(square,5,rootInt);
    cout<<precision<<endl;
    if (root != -1)
        cout << "The square root is " << root << endl;
    else
        cout << "Square Root not found";

    return 0;
}