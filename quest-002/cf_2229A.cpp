#include <algorithm>
#include <cstdlib>
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

        std::vector<int> a(n);
        for(int i = 0; i < n; i++) std::cin >> a[i];

        int best_dist = 1e9;
        for(int x = 1; x <= 1000; x++) {
            int max_dist = -1e9;
            for(int i = 0; i < n; i++) {
                int dist = abs(x - a[i]);
                max_dist = std::max(max_dist, dist);
            }
            best_dist = std::min(best_dist, max_dist);
        }

        std::cout << best_dist << '\n';
    }

    return 0;
}