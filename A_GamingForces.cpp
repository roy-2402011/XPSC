#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cnt++;
        }
    }
    if(cnt==1) cout<<n<<endl;
    else cout<<n - cnt/2<<endl;
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