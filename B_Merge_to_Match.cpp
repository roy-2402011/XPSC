
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

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (auto& it : a)
        cin >> it;
    for (auto& it : b)
        cin >> it;
    sort(a.begin(), a.end()), sort(b.begin(), b.end());
    if (a.size() < 2 * b.size()) {
        cout << "NO\n";
        return;
    }
    for (int i = b.size() - 1; i >= 0; i--)
        if (!(a[i] <= b[i] && b[i] <= a[a.size() - b.size() + i])) {
            cout << "NO\n";
            return;
        }
    cout << "YES\n";
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
