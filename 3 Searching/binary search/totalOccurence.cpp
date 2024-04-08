// find the total no. of occurence of the given number

#include<iostream>
#include<vector>
using namespace  std;

int firstOccurence(vector<int> vect, int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (vect[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (vect[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurence(vector<int> vect, int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (vect[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (vect[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    vector<int> vect;
    int size;

    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        int c;
        cin>>c;
        vect.push_back(c);
    }

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    int first = firstOccurence(vect,size,key);
    int last = lastOccurence(vect,size,key);

    int total = last-first+1;
    cout<<"Total occurence of "<<key<<" is "<<total<<endl;

    return 0;
}