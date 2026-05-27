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

    map<string,string> ans, has;

    for(int i = 0; i < n; i++) {

        string a, b;
        cin >> a >> b;


        if(has.find(a) != has.end()) {

            string s = has[a];

            ans[s] = b;

            has.erase(a);

    
            has[b] = s;
        }
        else {

            ans[a] = b;

            has[b] = a;
        }
    }

    cout << ans.size() << endl;

    for(auto [x,y] : ans) {
        cout << x << " " << y << endl;
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while(t--) solve();

    return 0;
}


//   "Every error is a step closer to the solution."
//     @Author : Prasanjit Roy