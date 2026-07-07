#include <ios>
#include <iostream>

typedef long long ll;

ll an(ll a1, ll n) {
    return (n * (n - 1)) / 2 + a1;
}

ll search(ll l, ll r) {
    ll lo = 1;
    ll hi = 1e5;
    ll ans = -1;

    while(lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        ll a_n = an(l, mid);

        if(a_n <= r) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    return ans;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;

    std::cin >> t;

    while(t--) {
        ll l, r;

        std::cin >> l >> r;

        ll ans = search(l, r);

        std::cout << ans << '\n';
    }

    return 0;
}