// searching in 2D-Array 
// matrix is row wise sorted as well as column wise sorted

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

bool search(vector<vector<int>> arr,int target){
    int row = arr.size();
    int col = arr[0].size();

    int rowIndex = 0;
    int colIndex = col-1;

    while(rowIndex < row && colIndex >= 0){
        int element = arr[rowIndex][colIndex];
        if(element == target)
            return true;
        else if(element < target)
            rowIndex++;
        else
            colIndex--;
    }
    return false;
}

int main()
{
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
    cout<<"Enter the key: ";
    cin>>target;

    cout << "Printing the spiral: " << endl;
    if(search(arr,target)){
        cout<<"Element Found!!!";
    }else{
        cout<<"Element Not Found!!!";
    }

    return 0;
}