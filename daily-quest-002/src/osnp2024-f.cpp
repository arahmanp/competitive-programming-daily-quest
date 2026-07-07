#include <ios>
#include <iostream>
#include <utility>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;

    std::cin >> n >> m;

    if(n > m) std::swap(n, m);

    int a = (n * (2 * m + (n - 1) * 2)) / 2;
    int b = (m * (m - 1)) / 2;

    int ans = a + b;

    std::cout << ans << '\n';
}