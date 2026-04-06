#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char,int> mp;

    for(char c : s) {
        mp[c]++;
    }

    int cnt = 0;

    for(auto it : mp) {
        if(it.second % 2 != 0) {
            cnt++;
        }
    }


    if(cnt - 1 <= k) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    fast_io();

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}