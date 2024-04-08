// String Compression
// i/p -> {a,a,b,b,b,c,c,c}
// o/p -> {a,2,b,3,c,3}

#include<iostream>
#include<vector>

using namespace std;

int compression(vector<char>& chars){
    int i=0;
    int ansIndex = 0;
    int n = chars.size();
    while(i<n){
        int j = i+1;
        while(j<n && chars[i] == chars[j]){
            j++;
        }
        // ya to vector pura traverse kr diya 
        // ya new element encounter kiya

        // old character store kr lo
        chars[ansIndex++] = chars[i];

        int count = j -i;


        if(count > 1){
            //converting counting into single digit and storing
            string cnt = to_string(count);
            for(char ch:cnt){
                chars[ansIndex++] = ch;
            }
        }
        i=j;
    }

    return ansIndex;
}

int main(){
    vector<char> chars;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"Enter the string character one by one: ";
    for(int i=0;i<size;i++){
        char ch;
        cin>>ch;
        chars.push_back(ch);
    }
    cout<<"After compressing the string: "<<endl;
    chars.resize(compression(chars));
    for(int i=0;i<chars.size();i++){
        cout<<chars[i];
    }

    return 0;
}