// FIND POWER OF A NUMBER GIVEN AS (A,B)

#include <iostream>
using namespace std;


int power(int a, int b){
    int result = 1;
    for(int i = 0; i<b; i++){
        result = result * a;
    }
    return result;
}

int main(){
    int a, b;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;

    cout<<"The result is: "<<power(a,b)<<endl;
}