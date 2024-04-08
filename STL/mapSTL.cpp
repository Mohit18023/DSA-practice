#include <iostream>
#include <map>

int main() {
    std::map<int, int> m;

    // Add elements to map
    for(int i = 0; i < 5; ++i) {
        m[i] = i * 10;
    }

    // Print elements of map
    for(auto it = m.begin(); it != m.end(); ++it) {
        std::cout << it->first << " => " << it->second << '\n';
    }

    return 0;
}
