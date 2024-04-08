#include <iostream>
#include <queue>

int main()
{
    std::queue<int> q;

    // Add elements to queue
    for (int i = 0; i < 5; ++i)
    {
        q.push(i);
    }

    // Print and remove elements from queue
    while (!q.empty())
    {
        std::cout << ' ' << q.front();
        q.pop();
    }

    return 0;
}
