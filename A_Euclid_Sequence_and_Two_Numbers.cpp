
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
    cin >> n;

    vector<ll> b(n);
    for (auto &x : b) cin >> x;
    sort(b.rbegin(),b.rend());
    if(b.size()==2) cout<<b[0]<<" "<<b[1]<<endl;
    
    else 
    {

      bool flag =true;
    for(int i=0;i<n-2;i++)
    {
        if(b[i]%b[i+1]!=b[i+2])
        {
          flag =false;
        }
    }
    if(flag)
    {
        cout<<b[0]<<" "<<b[1]<<endl;
    }
    else cout<<"-1"<<endl;


    }
   
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;  
    while (t--) solve();

    return 0;
}

