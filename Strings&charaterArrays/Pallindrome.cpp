// Check if the string is pallindrome or not
#include<iostream>
using namespace std;

int length(string str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

string reverse(string str)
{
    int e = length(str) - 1;
    int s = 0;

    while (s <= e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }

    return str;
}
// solution 1:
bool pallindrome(string str){
    return str == reverse(str)? true:false;
}


// solution 2:
bool check(string str){
    int s=0;
    int e=length(str) -1;
    while(s<=e){
        if(str[s] == str[e] || str[s] == str[e] + 32 || str[s] == str[e] - 32){
            s++;
            e--;
        }
        else
            return false;
    } 
    return true;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    if(check(str))
        cout<<"The string "<<str<<" is a pallindrome."<<endl;
    else 
        cout<<"The string "<<str<<" is not a pallindrome."<<endl;

    return 0;

}