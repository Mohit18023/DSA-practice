// 1009. COMPLEMENT OF BASE 10

#include<iostream>
using namespace std;


int complement(int x){
    // soln 1
    // int m = x;
    // int mask = 0;

    // while(m!=0){
    //     mask = (mask << 1) | 1;
    //     m = m>>1;
    // }

    // return (~x) & mask;
    
    // soln 2
    int mask = 1;

    while (mask < x)
        mask = (mask << 1) + 1;

    return mask ^ x;
}

int main(){
    cout<<"Enter the number: ";
    int x;
    cin>>x;

    cout << "Complement of " << x << " is " <<complement(x)<< endl;
}