#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
   for(int i=0;i<n;i++)
   {
    cout<<n+1-v[i]<<" ";
   }
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