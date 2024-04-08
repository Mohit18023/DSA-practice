// REMOVE ALL OCCURENCES OF THE SUB STRING
#include<iostream>
#include<string>

using namespace std;
string removeOccurences(string s,string part){
    while(s.length() !=  0 && s.find(part) < s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    string part;
    cout<<"Enter the sub-string: ";
    getline(cin,part);

    cout<<"After removing the all occurence of the sub string: "<<endl;
    cout<<removeOccurences(s,part);


    return 0;
}