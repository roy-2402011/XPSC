#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    int n;
    cin>>n;
    vector<int>v;
    int r = 3*n;
    for(int i=0;i<n;i++)
    {
        v.push_back(i+1);
        v.push_back(r-1);
        v.push_back(r);
        r-=2;
    }
    for(int i:v) cout<<i<<" ";
    cout<<endl;
    
}
int main() {
    fast_io();
    int t;
    cin>>t;

    while (t--) {
        solve();
    }
    return 0;
}

// PRASANJIT ROY , CS learner