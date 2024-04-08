// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool uniqueOccurrence(vector<int> &arr)
{
    int min_num = *min_element(arr.begin(), arr.end());
    int max_num = *max_element(arr.begin(), arr.end());

    // Adjust the size of count_arr to accommodate negative numbers
    vector<int> count_arr(max_num - min_num + 1, 0);

    // find occurrence
    for (int num : arr)
    {
        count_arr[num - min_num]++;
    }

    // Use a vector to keep track of unique occurrences
    vector<bool> unique_counts(arr.size() + 1, false);

    for (int count : count_arr)
    {
        if (count != 0)
        {
            if (unique_counts[count])
            {
                // we found duplicate
                return false;
            }
            else
            {
                unique_counts[count] = true;
            }
        }
    }

    // no duplicates
    return true;
}

bool uniqueOccurrences(vector<int> &arr)
{
    int min_num = *min_element(arr.begin(), arr.end());
    int max_num = *max_element(arr.begin(), arr.end());
    // creating an vector to store the occurence
    vector<int> count_arr(max_num - min_num + 1, 0);
    // find occurence
    for (int num : arr)
    {
        count_arr[num - min_num]++;
    }
    for (int num : count_arr)
    {
        cout << num << " ";
    }
    cout << endl;
    vector<bool> encountered(max_num - min_num + 1, false);

    for (int num : count_arr)
    {
        if(num==0)
            continue;
        if (encountered[num])
        {
            // we found dupllicate
            return false;
        }
        else
        {
            encountered[num] = true;
        }
    }
    // no duplicates
    return true;
}

int main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;

    vector<int> arr ;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    
    cout<<uniqueOccurrence(arr);

    return 0;





}