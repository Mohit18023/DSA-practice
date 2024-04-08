// linear search in a 2d array

#include<iostream>
using namespace std;

bool linearSearch(int **matrix,int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j] == key)
                return true;
        }
    }
    return false;

}


int main(){
    int col,row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;

    int **matrix = new int*[row];
    for(int i=0;i<row;i++){
        matrix[i]= new int[col];
    }

    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }

    int key;
    cout<<"Enter the key : ";
    cin>>key;

    if(linearSearch(matrix,row,col,key))
        cout<<"Element Found!!";
    else
        cout<<"Element not found!!";
    
    return 0;
}