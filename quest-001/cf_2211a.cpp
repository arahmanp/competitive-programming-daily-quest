#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    while(t--) {
        int n;
        std::cin >> n;

        std::vector<int> p(n);
        for(int i = 0; i < n; i++) std::cin >> p[i];

        if(n == 1) {
            std::cout << 1 << '\n';
            continue;
        }

        for(int i = 0; i < n; i++) std::cout << 2 << ' ';

        std::cout << '\n';
    }
}