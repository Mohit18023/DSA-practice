// Row wise sum of the 2D Array

#include<iostream>
using namespace std;

int main(){
    int col,row;
    cout<<"Enter the number of columns: ";
    cin>>col;
    cout<<"Enter the number of rows: ";
    cin>>row;
    int **matrix = new int*[row];
    for(int i=0;i<row;i++){
        matrix[i] = new int[col];
    }

    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"The matrix is :"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Row wise sum is: "<<endl;
    for(int j=0;j<col;j++){
        int sum = 0;
        for(int i=0;i<row;i++){
            sum+=matrix[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl<<"Column wise sum is: "<<endl;
    for(int j=0;j<col;j++){
        int sum = 0;
        for(int i=0;i<row;i++){
            sum+=matrix[i][j];
        }
        cout<<sum<<" ";
    }

    return 0;

}