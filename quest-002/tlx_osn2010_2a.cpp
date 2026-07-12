#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int w, h, n;

    std::cin >> w >> h >> n;

    std::vector<std::vector<int>> grid(h, std::vector<int>(w, 0));

    for(int p = 0; p < n; p++) {
        int a, b, c, d, k;

        std::cin >> a >> b >> c >> d >> k;

        for(int q = a - 1; q < c; q++) {
            for(int r = b - 1; r < d; r++) {
                grid[r][q] = k;
            }
        }
    }

    for(auto row : grid) {
        for(auto el : row) {
            std::cout << el;
        }
        std::cout << '\n';
    }

    return 0;
}