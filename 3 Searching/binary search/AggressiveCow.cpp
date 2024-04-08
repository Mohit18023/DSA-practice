// Aggressive cows 
// Given an array of length 'N' where each element denotes the position of a stall. Now you have 'N' stalls and an integer 'K' which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stall, such that the minimum distance between any two of them is as large as possible. Return the largest minimun distance

// Contraints
// 1 <= T <= 5
// 2 <= N <= 20000
// 2 <= C <= N
// 0 <= ARR[i] <= 10^9

// Where the T is the number of test cases , "N" is the length of the given array and ARR[i] denotes the i-th element in the array

// arr = {4,2,1,3,6}  // stalls 
// k = 2 
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int max(vector<int> vect){
    int max = INT_MIN;
    for(int i=0;i<vect.size();i++){
        if(vect[i] > max){
            max = vect[i];
        }
    }
    return max;
}

int min(vector<int> vect){
    int min = INT_MAX;
    for(int i=0;i<vect.size();i++){
        if(vect[i] < min){
            min = vect[i];
        }
    }

    return min;
}

bool ispossible(vector<int> vect,int mid,int m){
    sort(vect.begin(),vect.end());
    int cowCount = 1;
    int lastPos =vect[0];
    
    for(int i=0;i<vect.size();i++){
        if(vect[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == m){
                return true;
            }
            lastPos = vect[i];

        }
    }
    return false;

}


int allocatedSpace(vector<int> vect,int m){
    int s =0;
    int e = max(vect) - min(vect);
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(ispossible(vect,mid,m)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }

    return ans;
}

int main(){
    vector<int> vect;
    int size;

    cout<<"Enter the number of stalls: ";
    cin>>size;

    cout<<"Enter the distance of the stalls: "<<endl;
    for(int i=0;i<size;i++){
        int c;
        cin>>c;
        vect.push_back(c);
    }

    int n;
    cout<<"Enter the number of cows: ";
    cin>>n;

    cout<<"The max distance between cows is: "<<allocatedSpace(vect,n);

    return 0;
}