// Problem Name: Angka 5
// Platform: TLX
// Tags: Implementation
// Verdict: Accepted
// URL: https://tlx.toki.id/problems/osn-2008/2H

#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int i, j, n;

    std::cin >> i >> j >> n;

    std::vector<int> left(i), right(j), merged;

    for(int k = 0; k < i; k++) std::cin >> left[k];
    for(int k = 0; k < j; k++) std::cin >> right[k];

    int left_idx = 0;
    int right_idx = 0;

    while(left_idx < i && right_idx < j) {
        if(left[left_idx] <= right[right_idx]) {
            merged.push_back(left[left_idx]);
            left_idx++;
        } else {
            merged.push_back(right[right_idx]);
            right_idx++;
        }
    }

    while(left_idx < i) {
        merged.push_back(left[left_idx]);
        left_idx++;
    }

    while(right_idx < j) {
        merged.push_back(right[right_idx]);
        right_idx++;
    }

    std::cout << merged[n - 1];

    return 0;
}