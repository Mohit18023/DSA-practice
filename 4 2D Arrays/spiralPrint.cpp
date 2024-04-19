// Spiral Print

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>>& arr){
    vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();
    int count = 0;
    int total = row*col;

    // Index initialization
    int startingRow = 0;
    int startingColumn = 0;
    int endingRow = row - 1;
    int endingColumn = col - 1;
    while(count<total){
        // printing starting row
        for (int index = startingColumn; count < total && index <= endingColumn; index++)
        {
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;

        // Printing ending column
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            ans.push_back(arr[index][endingColumn]);
            count++;
        }
        endingColumn--;

        // printing ending row
        for (int index = endingColumn; count < total && index >= startingColumn; index--)
        {
            ans.push_back(arr[endingRow][index]);
            count++;
        }
        endingRow--;

        //printing starting column
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            ans.push_back(arr[index][startingColumn]);
            count++;
        }
        startingColumn++;
    }
    return ans;
}
// vector<int> spiralOrder(vector<vector<int>> &matrix)
// {
//     int rows = matrix.size();
//     int cols = matrix[0].size();
//     vector<int> result;
    

//     int T = 0;
//     int B = rows - 1;
//     int L = 0;
//     int R = cols - 1;

//     while (T <= B && L <= R)
//     {

//         // Now run the loops  for top -------> right
//         for (int i = L; i <= R; i++)
//         {
//             result.push_back(matrix[T][i]);
//         }

//         // increment the top variable
//         T++;

//         // Run the loop for right --------> bottom
//         for (int i = T; i <= B; i++)
//         {
//             result.push_back(matrix[i][R]);
//         }

//         // decrement the right
//         R--;

//         // run the loop from bottom right -------> bottom left
//         for (int i = R; i >= L; i--)
//         {
//             result.push_back(matrix[B][i]);
//         };
//         B--;

//         for (int i = B; i >= T; i--)
//         {
//             result.push_back(matrix[i][L]);
//         }

//         L++;
//     }
//     return result;
// }
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

int main(){
    vector<vector<int>> arr;
    int col,row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;

    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<col;i++){
        vector<int> temp;
        for(int j=0;j<row;j++){
            int c;
            cin>>c;
            temp.push_back(c);
        }
        arr.push_back(temp);
    }
    cout<<"Printing the matrix: "<<endl;
    print(arr);

    cout<<"Printing the spiral: "<<endl;
    vector<int> ans = spiralOrder(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}