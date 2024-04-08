// Permutation in string
// IMPORTANT
#include<iostream>
#include<string>
using namespace std;

bool checkEqual(int a[],int b[]){
    for(int i=0;i<26;i++){
        if(a[i] != b[i])
            return 0;
    }
    return 1;
}

bool checkInclusion(string s1,string s2){
    int count[26];
    for(int i=0;i<s1.length();i++){
        int index = s1[i] -'a';
        count[index]++;
    }
    // now traverse s2 string of size s1 length and compare
    int i=0;
    int windowSize = s1.length();
    int count2[26] = {0};
    // running for first element
    while(i < windowSize && i<s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if(checkEqual(count,count2))
        return 1;
    

    //aage window progress karo
    while(i<s2.length()){
        char newchar = s2[i];
        int index = newchar - 'a';
        count2[index]++;

        char oldchar=s2[i-windowSize];
        index = oldchar - 'a';
        count2[oldchar]--;
        i++;

        if(checkEqual(count,count2))
            return 1;

    }

    return 0;
}

int main(){
    
    return 0;
}