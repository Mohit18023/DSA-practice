// valid pallindrome 
// remove all the un-necessary elements
#include<iostream>
#include<vector>
using namespace std;

bool validChar(char str){
    if (str >= 'a' && str <= 'z' || str >= 'A' && str <= 'Z' || str >= '0' && str <= '9')
        return true;
    return false;
}

string clean(string str){
    int i=0;
    string temp ="";
    for(int i=0;i<str.length();i++){
        if(validChar(str[i])){
            if(str[i]>= 'A' && str[i] <= 'Z')
                temp.push_back(str[i]+32);
            else
                temp.push_back(str[i]);
        }
            
    }

    return temp;

}

string reverse(string str)
{
    int e = str.length() - 1;
    int s = 0;

    while (s <= e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }

    return str;
}

bool palindrome(string str){
    return str == reverse(str)?true:false;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    str = clean(str);
    //cout<<str;

    if(palindrome(str))
        cout<<"The string '"<<str<<"' is a valid palindrome"<<endl;
    else
        cout<<"The string '"<<str<<"' is not a valid palindrome"<<endl;
    return 0;
}