
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
    
     ll n;
     cin>>n;
     ll arr[3];

     for(int i=0;i<3;i++)
      cin>>arr[i];

    // ll cnt =0;
    // for(int i=0;i<3;i++)
    // {
    //     if(arr[i]<=n) cnt=cnt + (n-arr[i]);
    // }

    // if(cnt<n)
    // {
    //     cout<<cnt<<endl;
    // }
    // else
     cout<<n-min(arr[2],min(arr[0],arr[1]))<<endl;

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
