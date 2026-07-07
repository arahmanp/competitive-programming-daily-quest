#include <cmath>
#include <ios>
#include <iostream>

typedef long long ll;

ll d(ll i, ll a, ll b, ll c) {
    int dist = (i / 3) * (a + b + c);

    if(i % 3 == 1) dist += a;
    else if(i % 3 == 2) dist += a + b;

    return dist;
}

ll search(ll n, ll a, ll b, ll c) {
    ll lo = 1LL;
    ll hi = 3LL * std::ceil((double)n / (a + b + c));
    ll ans;

    while(lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        ll dist = d(mid, a, b, c);

        if(dist >= n) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
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
        ll n, a, b, c;

        std::cin >> n >> a >> b >> c;

        ll ans = search(n, a, b, c);

        std::cout << ans << '\n';
    }

    return 0;
}