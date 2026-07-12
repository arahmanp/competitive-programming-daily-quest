#include <algorithm>
#include <cmath>
#include <ios>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    while(t--) {
        int n, x, y, z;
        std::cin >> n >> x >> y >> z;

        int t_normal = ceil((double) n / (x + y));

        if(ceil((double)n / x) > z) {
            int t_ai = z + ceil((double)(n - z * x) / (x + 10 * y));

            int ans = std::min(t_normal, t_ai);

            std::cout << ans << '\n';
        } else {
            std::cout << t_normal << '\n';
        }
    }

    return 0;
}