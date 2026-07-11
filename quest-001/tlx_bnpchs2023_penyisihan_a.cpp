#include <cstddef>
#include <ios>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::string s;

    std::cin >> n >> s;

    std::vector<std::string> tokens;
    std::stringstream ss(s);
    std::string token;

    while(std::getline(ss, token, '*')) {
        tokens.push_back(token);
    }

    std::string ans = "";
    for(size_t i = 0; i < tokens.size(); i++) {
        if(i % 2 == 0) {
            ans += tokens[i];
        }
    }

    std::cout << ans;

    return 0;
}