
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
    
     string s;
     cin>>s;

     int sz = s.size();

     for(int i=0;i<sz;i++)
     {
        if(s[i]=='0')
        {
            s.erase(i,1);
            break;
        }
     }

       sz=sz-1;

     for(int i=0;i<sz;i++)
     {
        if(s[i]=='1')
        {
            s.erase(i,1);
            break;
        }
     }
 
     cout<<s<<endl;
    
   

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
