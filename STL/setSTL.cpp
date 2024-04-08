#include <iostream>
#include <set>

int main()
{
    std::set<int> s;

    // Add elements to set
    for (int i = 0; i < 5; ++i)
    {
        s.insert(i);
    }

    // Print elements of set
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        std::cout << ' ' << *it;
    }

    return 0;
}
