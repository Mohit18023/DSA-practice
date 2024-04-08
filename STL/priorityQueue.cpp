#include <iostream>
#include <queue>

int main()
{
    std::priority_queue<int> pq;

    // Add elements to priority queue
    for (int i = 0; i < 5; ++i)
    {
        pq.push(i);
    }

    // Print and remove elements from priority queue
    while (!pq.empty())
    {
        std::cout << ' ' << pq.top();
        pq.pop();
    }

    return 0;
}
