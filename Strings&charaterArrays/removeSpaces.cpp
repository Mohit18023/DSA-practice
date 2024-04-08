// remove spac and put '@40' in place of the space

// => HOMEWORK --> don't make temp string change in the main string and performe the task

#include<iostream>
#include <string>
using namespace std;

string replace(string &str){
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]!= ' ')
            temp.push_back(str[i]);
        else{
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
    }
    return temp;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);

    cout<<"string after removing spaces and adding @40 : ";
    cout<<replace(str);

    return 0;

}