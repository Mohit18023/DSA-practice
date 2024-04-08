// Implementing stack STL
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // Create a stack of integers
     stack<int> myStack;

    // Use the push() function to add elements
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Use the top() function to get the top element
     cout << "The top element is: " << myStack.top() <<  endl;

    // Use the size() function to get the number of elements
     cout << "The stack size is: " << myStack.size() <<  endl;

    // Use the pop() function to remove the top element
    myStack.pop();

    // Display the top element
     cout << "After popping, the top element is: " << myStack.top() <<  endl;

    // Check if the stack is empty
    if (myStack.empty())
         cout << "The stack is empty." <<  endl;
    else
         cout << "The stack is not empty." << std::endl;

    return 0;
}
