
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
    
     int sz;
     cin>>sz;
     string b;
     cin>>b;
       set<char> st(b.begin(), b.end());
        string r;
        for (char c : st) r += c;

        // Create symmetric mapping
        map<char, char> mp;
        int m = r.size();

        for (int i = 0; i < m; i++) {
            mp[r[i]] = r[m - 1 - i];
        }

        // Decode
        for (char &c : b) {
            c = mp[c];
        }

        cout << b << '\n';
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
