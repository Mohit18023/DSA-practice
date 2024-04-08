// Painter partition problem
// Given are N boards of with length of each given in the form of array, and K painters, such that each painter takes 1 unit of time to paint 1 unit of the board. The task is to find the minimum time to paint all boards under the constraints that any painter will only paint continuous sections of boards, say board {2, 3, 4} or only board {1} or nothing but not board {2, 4, 5}.

// Examples:

// Input : N = 4, A = {10, 10, 10, 10}, K = 2

// Output : 20

// Explanation: Here we can divide the boards into 2 equal sized partitions (Painter 1 will paint boards A1 and A2, and Painter 2 will paint boards A3 and A4). So each painter gets 20 units of board and the total time taken is 20.

// Input : N = 4, A = {10, 20, 30, 40}, K = 2

// Output : 60

// Explanation : Since there are only 2 painters,
// therefore divide first 3 boards to painter 1(A1, A2 and A3)with time = 60, and last board to painter 2(A4)with time = 40. Therefore total time taken = 60, which is the minimum possible.
// Please note the combination A1 and A4 to Painter 1 with time 50,
//and A2 and A3 to Painter 2 with time 50, will yield a smaller time(50 units).But this cant be considered due to the constraint that a painter cannot paint non - continuos series of boards.
  
#include<iostream>
#include<vector>

using namespace std;

int sum(vector<int> arr,int start,int end){
    int sum=0;
    for(int i = start;i<=end;i++){
        sum += arr[i];
    }
    return sum;
}

bool ispossible(vector<int> vect, int m,int mid){
    int PainterCount = 1;
    int workSum = 0;

    for(int i=0;i<vect.size();i++){
        if(workSum + vect[i] <= mid ){
            workSum+=vect[i];
        }else{
            PainterCount++;
            if(PainterCount>m || vect[i] > mid){
                return false;
            }
            workSum= vect[i];
        }
    }
    return true;
}

int Allocateboard(vector<int> vect, int m){
    int s = 0;
    int e = sum(vect,0,vect.size()-1);
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(ispossible(vect,m,mid)){
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
    int size;
    cout<<"Enter the number of walls: ";
    cin>>size;
    cout<<"Enter the number of units on the walls :"<<endl;
    for(int i=0;i<size;i++){
        int c;
        cin>>c;
        vect.push_back(c);
    }

    int m;
    cout<<"Enter the the number of painters: ";
    cin>>m;
    

    // now the search space i.e., the sum of all the numbers in the vector
    cout<<"The minimum work is : "<<Allocateboard(vect,m);
    



    return 0;
}