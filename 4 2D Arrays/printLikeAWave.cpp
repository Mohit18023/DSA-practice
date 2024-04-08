// // Print like a wave 
// // from top to bottom then bottom to top 
// // i/p => 1  2
// //       3   4
// // o/p => {1,3,4,2}
  

// -> using dynamic memory allocation
// #include<iostream>
// using namespace std;

// void print(int **matrix,int col,int row){
//     cout << "The matrix is : " << endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << matrix[j][i] <<" ";
//         }
//         cout<<endl;
//     }
// }

// void printWave(int **matrix,int col,int row){
//     cout<<"The wave is: "<<endl;
//     int j =0;
//     for(int i=0;i<row;i++){

//         if(j<row){
//             j=0;
//             while(j<col){
//                 cout<<matrix[i][j]<<" ";
//                 j++;
//             }
//         }else{
//             j = col-1;
//             while(j>=0){
//                 cout << matrix[i][j] << " ";
//                 j--;
//             }
                
//         }
//     }
// }

// int main(){
//     int row,col;
//     cout<<"Enter the number of columns: ";
//     cin>>col;

//     cout<<"Enter the number of rows: ";
//     cin>>row;

//     int **matrix = new int*[row];
//     for(int i=0;i<row;i++){
//         matrix[i] = new int[col];
//     }

//     cout<<"Enter the elements : "<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     print(matrix,col,row);
//     cout<<endl;
//     printWave(matrix,col,row);

// }

#include<iostream>
#include<vector>

using namespace std;

vector<int> wavePrint(vector<vector<int>> arr,int row,int col){
    vector<int> ans;
    for(int i=0;i<col;i++){
        if(i&1){
            // odd case ->bottom to top
            for(int j = row-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
                ans.push_back(arr[i][j]);
            }

        }else{
            // even case -> top to bottom
            for(int j = 0;j<row;j++){
                cout<<arr[i][j]<<" ";
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}


int main(){
    vector<vector<int>> arr;
    int col;
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of cols: ";
    cin>>col;

    cout<<"Enter the elements of the matrix: "<<endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    wavePrint(arr,row,col);

    return 0;
    


}