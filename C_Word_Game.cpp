
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
    
     int n;
     int m=3;
     cin>>n;

     map<string,vector<int>>mp;

     for(int i=1;i<=m;i++)
     {
        for(int j=1;j<=n;j++)
        {
            string s;
            cin>>s;
            mp[s].push_back(i);
        }
     }

     vector<int>ans(m+1);
     for(auto [x,y]:mp)
     {
        vector<int>v=y;
        if(v.size()==1)
        {
            ans[v[0]]+=3;
        }
        if(v.size()==2)
        {
            ans[v[0]]++;
            ans[v[1]]++;
        }
     }
     for(int i=1;i<=m;i++)
     {
        cout<<ans[i]<<" ";
     }
     cout<<"\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;  
    while (t--) solve();

    return 0;
}


//   "Every error is a step closer to the solution." 
//     @Author : Prasanjit Roy
