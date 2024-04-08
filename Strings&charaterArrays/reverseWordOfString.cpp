// HOME WORK ======>  11/11/23
// reverse the words of the string
// i/p => my name is mohit
// o/p => ym eman si tihom
// Read about =>
//               * custom delimeter
//               * cin.getline(str,len);


#include<iostream>
#include<string>
using namespace std;

void reverse(string &str,int s,int e){
    while(s<=e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
}

void reverseWord(string &str){
    int i=0;
    while(i<=str.length()){

    }
}

int main(){
    string str;
    cout<<"Enter the string: ";
    

    return 0;
}