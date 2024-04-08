// You are given an integer array 'ARR' of size 'N' and an integer 'S'.Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

//  Note :

//     Each pair should be sorted i.e the first value should be less than or
//     equals to the second value.

//    Return the list of pairs sorted in non - decreasing order of their first value.In case if two pairs have the same first value,
//     the pair with a smaller second value should come first.


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// more appropriate
vector<vector<int>> pairsum(vector<int> &arr, int s)
{
    // Write your code here.
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

// tying to reduce the tc - but didn't cover all the cases
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    // Write your code here.
    vector<vector<int>> pairs;

    int i = 0;

    while (i < arr.size())
    {
        auto val = find(arr.begin() + i, arr.end(), s - arr[i]);
        if (val != arr.end())
        {
            vector<int> temp;
            temp.push_back(min(arr[i], *val));
            temp.push_back(max(arr[i], *val));
            pairs.push_back(temp);
        }
        i = i + 1;
    }

    return pairs;
}

int main(){
    int size;
    cout<<"Enter the size of the vector: ";
    cin>>size;

    vector<int> arr;

    cout<<"Enter the vector:  "<<endl;
    for(int i=0;i<size;i++){
        int c;
        cin>>c;
        arr.push_back(c);
    }
    int sum;
    cout<<"Enter the sum: ";
    cin>>sum;

    vector<vector<int>> pair = pairSum(arr,sum);
    sort(pair.begin(),pair.end());
    for(int i=0;i<pair.size();i++){
        cout<<pair[i][0]<<" | "<<pair[i][1]<<endl;
    }

    return 0;
}
