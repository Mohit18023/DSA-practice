// Book Allocation Problem is a standard problem in which we have given a number books 'n' and pages in book 'a[]' and number of stdents 'm'
// we have to allocation books to the stdents in such a way that every student must get a book and every book has been allocated 
// The allocation must be continous 
// The maximum number of pages assigned to a student is minimun


// Why Binary Search & How do we know about it?
// When we can neglect the left or right part by finding a possible / Not possible solution on a sorted answer search space. we can use Binary Search
#include<iostream>
#include<vector>

using namespace std;

// int min(vector<int> possibleAns){
//     int min = INT_MAX;
//     for(int i=0;i<possibleAns.size();i++){
//         if(possibleAns[i] < min)
//             min = possibleAns[i];
//     }
//     return min;
// }

// int max(int a,int b){
//     return a>=b?a:b;
// }

int sum(vector<int> vect, int start, int end){
    int sum=0;
    for(int i=0;i<=end;i++){
        sum+=sum+vect[i];
    }
    return sum;
}

bool isPossible(vector<int> arr,int n,int m,int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0;i<n;i++){
        if(pageSum+arr[i] <= mid){
            pageSum += arr[i];
        }else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;

}

int allocatedBooks(vector<int> arr,int n,int m){
    int s = 0;
    int e = sum(arr,0,arr.size()-1);
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid -1;
        }else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}


int main(){
    vector<int> vect;
    int n;
    cout<<"Enter the number of books: ";
    cin>>n;

    cout<<"Enter the pages in the book: "<<endl;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        vect.push_back(c);
    }
    int m;
    cout<<"Enter the number of students: ";
    cin>>m;

    cout<<"The maximum allocated to a student is "<<allocatedBooks(vect,n,m);

    return 0;
}