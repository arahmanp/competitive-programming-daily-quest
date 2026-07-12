// Problem Name: Naik dan Turun
// Platform: TLX
// Tags: Ad Hoc
// Verdict: Accepted
// URL: https://tlx.toki.id/problems/troc-1/C          

#include <algorithm>
#include <ios>
#include <iostream>

typedef long long ll;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, q;

    std::cin >> n >> q;

    ll l = 0, r = 0;

    while(q--) {
        int t, x, y;

        std::cin >> t >> x >> y;

        if(t == 1) {
            l += (ll)y;
            if(x == n) r += (ll)y;
        }else if(t == 2) {
            r -= (ll)y;
            if(x == n) l -= (ll)y;
        }
    }

    if(l < 0) l = -l;
    if(r < 0) r = -r;

    ll ans = std::max(l, r);

    std::cout << ans;

    return 0;
}