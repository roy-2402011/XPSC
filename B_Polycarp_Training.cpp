
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
     cin>>n;
      multiset<ll>ml;
     rep(i,0,n)
     {
        ll x;
        cin>>x;
        ml.insert(x);

     }
     ll cnt=0;
     ll plbm=1;
     while(!ml.empty())
     {
        auto LB = ml.lower_bound(plbm);
        if(LB!=ml.end())
        {
            cnt++;
            ml.erase(LB);

        }
        else break;
        plbm++;

     }
     cout<<cnt<<endl;

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
