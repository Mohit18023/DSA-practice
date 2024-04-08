// Peak of the mountain , it is a problem in which we have to find the largest value in the array which contain value first in increasing order and then in decreasing order like this <1,2,3,5,1>   


#include <iostream>
#include <vector>

using namespace std;

int Peak(vector<int> vect, int size)
{
    int s = 0;
    int e = vect.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (vect[mid] > vect[mid + 1] && vect[mid] > vect[mid - 1])
        {
            return mid;
        }
        else if (vect[mid] < vect[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        /* one more way to do this is 
        if(arr[mid] < arr[mid+1])
            s = mid + 1;
        else
            e = mid;
        */

        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    vector<int> vect;
    int size;

    cout << "Enter the size of the list: ";
    cin >> size;

    cout << "Enter the elements of the list:" << endl;
    for (int i = 0; i < size; i++)
    {
        int c;
        cin >> c;
        vect.push_back(c);
    }

    int peak = Peak(vect, size);

    cout << "The peak position is " << peak + 1 << " and the value is " << vect[peak] << endl;

    return 0;
}