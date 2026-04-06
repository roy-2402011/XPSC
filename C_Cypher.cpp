#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) {
        int b;
        cin >> b;

        string s;
        cin >> s;

        int move = 0;

        for(char c : s) {
            if(c == 'U') move--;
            else move++;
        }

        a[i] = (a[i] + move) % 10;

        
        if(a[i] < 0) a[i] += 10;
    }

    for(int x : a) {
        cout << x << " ";
    }
    cout <<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) 
    {
        solve();
    }
    return 0;
}