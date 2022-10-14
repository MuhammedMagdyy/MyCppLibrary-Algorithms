#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    map<char, int> mp;
    for (auto &it: str) ++mp[it];
    int ans = 0;
    bool ok = false;
    for (auto &it: mp) {
        if (it.second & 1) ++ans;
        ok |= (ans > 1);
    }
    ok ? cout << "NO" << '\n' : cout << "YES" << '\n';
    return 0;
}