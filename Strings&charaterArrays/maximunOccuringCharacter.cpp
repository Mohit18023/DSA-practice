// MAXIMUM OCCURING CHARACTER IN THE INPUT STRING

#include<iostream>
using namespace std;

char getMax(string str){
    int arr[26] = {0};

    for(int i =0;i<26;i++){
        if(str[i] >= 'A' && str[i]<= 'Z'){
            arr[str[i]-'a']++;
        }
        if(str[i] >='a' && str[i] <= 'z'){
            arr[str[i]-'A']++;
        }
    }

    int max = INT_MIN;
    int index =-1;
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            index =i;
            max = arr[i];
        }
    }

    return index+65;

}

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    cout<<getMax(str)<<" is the maximun occuring character in the string."<<endl;

    return 0;

}