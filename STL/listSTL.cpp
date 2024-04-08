#include <iostream>
#include <list>

using namespace std;

int main()
{
    // Create a list of integers
    list<int> myList = {10, 20, 30, 40, 50};

    // Display the list
    cout << "The list is: ";
    for (int num : myList)
    {
        cout << num << " ";
    }
    cout <<  endl;

    // Add an element to the end of the list
    myList.push_back(60);

    // Display the list
    cout << "After adding an element, the list is: ";
    for (int num : myList)
    {
        cout << num << " ";
    }
    cout <<  endl;

    // Remove an element from the front of the list
    myList.pop_front();

    // Display the list
    cout << "After removing an element, the list is: ";
    for (int num : myList)
    {
        cout << num << " ";
    }
    cout <<  endl;

    // Use the erase function to remove an element at a specific position
     list<int>::iterator it = myList.begin();
     advance(it, 2); // Advance the iterator to the 3rd element
    myList.erase(it);    // Erase the 3rd element

    // Display the list
    cout << "After using the erase function, the list is: ";
    for (int num : myList)
    {
        cout << num << " ";
    }
    cout <<  endl;

    return 0;
}
