#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

typedef long long ll;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    ll n, m, k;

    std::cin >> n >> m >> k;

    std::vector<int> a(n);

    for(int i = 0; i < n; i++) std::cin >> a[i];

    ll curr_height = m;

    std::sort(a.begin(), a.end());

    int ans = 0;
    int idx = 0;

    for(int i = 0; i < n; i++) {
        ll new_height = curr_height + k;

        while(idx < n && (ll)a[idx] <= new_height) idx++;

        if(idx < n) {
            new_height = (ll)a[idx];
            ans++;
            idx++;
        }

        curr_height = new_height;
    }

    std::cout << ans << '\n';

    return 0;
}