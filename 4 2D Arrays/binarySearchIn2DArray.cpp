// Search in 2D-Array *use binary search

#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool searchMatrx(vector<vector<int>>& matrix,int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row*col -1;
    int mid = start + (end-start)/2;

    while(start<=end){
        int element = matrix[mid / col][mid % col];
        if (element == target){
            return true;
        }else if(element > target){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> arr;
    int col, row;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < col; i++)
    {
        vector<int> temp;
        for (int j = 0; j < row; j++)
        {
            int c;
            cin >> c;
            temp.push_back(c);
        }
        arr.push_back(temp);
    }
    cout << "Printing the matrix: " << endl;
    print(arr);
    int target;
    cout<<"Enter the element to find: ";
    cin>>target;
    if(searchMatrx(arr,target))
        cout<<"element found";
    else 
        cout<<"Element not found!!";

    return 0;
}