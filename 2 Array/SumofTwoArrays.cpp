// Sum of two arrays
#include<iostream>
#include<vector>

using namespace std;

vector<int> sum(vector<int>& arr1,vector<int> arr2){
    int i=arr1.size()-1;
    int j=arr2.size()-1;
    int remainder=0;
    int newSize = (arr1.size() > arr2.size() ? arr1.size() : arr2.size()) ;
    vector<int> result(newSize);
    newSize = newSize-1;

    while(i>=0 && j>=0){
        //cout<<"Remainder : "<<remainder<<endl;
        //cout<<"first array "<<i<<" position: "<<arr1[i]<<endl;
        //cout<<"second array "<<j<<" position: "<<arr2[j]<<endl;
        result[newSize] = (arr1[i] + arr2[j] + remainder) % 10 ;
        //cout<<"the reults "<<newSize<<" position: "<<result[newSize]<<endl;
        remainder = (arr1[i] + arr2[j] + remainder )/10;
        //cout<<"New Remainder: "<<remainder<<endl;
        i--;
        j--;
        newSize--;
    }
    while(i>=0){
        //cout << "Remainder : " << remainder << endl;
        //cout << "first array " << i << " position: " << arr1[i] << endl;
        
        result[newSize] = (arr1[i] + remainder)%10;
        //cout << "the reults " << newSize << " position: " << result[newSize] << endl;
        remainder = (arr1[i] + remainder)/10;
        //cout << "New Remainder: " << remainder << endl;
        newSize--;
        i--;
    }
    while(j>=0){
        //cout << "Remainder : " << remainder << endl;
        //cout << "second array " << j << " position: " << arr2[j] << endl;

        result[newSize] = (arr2[j] + remainder)%10;
        //cout << "the reults " << newSize << " position: " << result[newSize] << endl;
        remainder = (arr2[j] + remainder )/10;
        //cout << "New Remainder: " << remainder << endl;
        newSize--;
        j--;
    }

    return result;

}

int main(){
    vector<int> arr;
    int size;

    cout<<"Enter the size of the first array: ";
    cin>>size;

    cout<<"Enter the element of the second array: "<<endl;
    for(int i=0;i<size;i++){
        int c;
        cin>>c;
        arr.push_back(c);
    }

    vector<int> arr2;
    int size2;

    cout<<"Enter the size of second array: ";
    cin>>size2;

    cout<<"Enter the element of the second array: "<<endl;
    for(int i=0;i<size2;i++){
        int c;
        cin>>c;
        arr2.push_back(c);
    }

    vector<int> result = sum(arr,arr2);

    cout<<"The sum is : "<<endl;

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}