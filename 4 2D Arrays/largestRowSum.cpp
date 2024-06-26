// largest Row wise sum of the 2D Array

#include <iostream>
using namespace std;

int main()
{
    int col, row;
    cout << "Enter the number of columns: ";
    cin >> col;
    cout << "Enter the number of rows: ";
    cin >> row;
    int matrix[row][col];
    int max =0;
    int maxIndex=-1;

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "The matrix is :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Row wise sum is: " << endl;
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += matrix[j][i];
        }
        if(max<sum){
            max = sum;
            maxIndex = j;
        }
        cout << sum << " ";
    }
    cout<<endl<<"The lagest row sum is "<<max<<" from "<<maxIndex+1<<"th row.";

    return 0;
}