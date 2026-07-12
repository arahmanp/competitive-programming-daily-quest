// Problem Name: Bilangan dan Operasi
// Platform: TLX
// Tags: Ad Hoc
// Verdict: Accepted
// URL: https://tlx.toki.id/problems/troc-13/C

#include <ios>
#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    std::vector<int> v(n);
    std::unordered_set<int> us;

    for(int i = 0; i < n; i++) {
        std::cin >> v[i];
        us.insert(v[i]);
    }

    if(us.size() == 1) {
        std::cout << 1;
        return 0;
    }

    if(us.size() == n) {
        std::cout << n;
        return 0;
    }

    std::cout << n - 1;

    return 0;
}