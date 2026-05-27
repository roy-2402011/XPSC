#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<string> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    reverse(s.begin(), s.end());

    set<string> seen;

    for (string x : s) {
        if (seen.count(x) == 0) {
            cout << x << '\n';
            seen.insert(x);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}