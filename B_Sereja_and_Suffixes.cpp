
/*******************************************************
*                                                      *
*    “Saraswati Mahabhage, Vidye Kamalalochane         *
*    Vishwarupe Vishalakshi, Vidyam Dehi Namostute.”   *
*                                                      *
*******************************************************/

#include <bits/stdc++.h>
using namespace std;

#define ll   long long
#define pb   push_back
#define all(x) x.begin(), x.end()
#define rep(i,a,b) for(int i=a; i<b; i++)

const int INF  = 1e9;
const ll  LINF = 1e18;
const int MOD  = 1e9 + 7;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>v(n+1);

    rep(i,1,n+1) cin>>v[i];
    vector<int>dis(n+1);
    set<int>s;
    // rep(i,1,m+1)
    // {
    //     int x;
    //     cin>>x;
    //     rep(i,x,n+1) s.insert(v[i]);
    //     cout<<s.size()<<endl;
    //     s.clear();
    // }
    for(int i=n;i>=1;i--)
    {  

        s.insert(v[i]);
        dis[i]=s.size();
    }
    rep(i,1,m+1)
    {
        int x;
        cin>>x;
        cout<<dis[x]<<endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;  
    while (t--) solve();

    return 0;
}


//   "Every error is a step closer to the solution." 
//     @Author : Prasanjit Roy
