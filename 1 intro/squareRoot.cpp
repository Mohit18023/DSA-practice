//  FIND THE SQUARE ROOT OF A NUMBER

#include <iostream>
using namespace std;

int square_root(int num){
    int i =1;
    while(i*i <= num){
        i++;
    }
    return (i-1);
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"The square root of the number is: "<<square_root(num)<<endl;
}