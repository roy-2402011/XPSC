
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
bool isPalindrome(ll n) {
    if (n < 0) return false; 
    int original = n;
    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    return original == rev;
}
void solve() {
    ll n;
    cin >> n;

    ll a = -1, b = -1;

    // start from largest multiple of 12 ≤ n
    ll ed = (n / 12) * 12;
    ll st = n - ed;

    // try limited steps (important for speed)
    for (int i = 0; i <= 200; i++) {
        if (ed < 0) break;

        if (isPalindrome(st)) {
            a = st;
            b = ed;
            break;
        }

        // move like your style (but optimized)
        ed -= 12;
        st = n - ed;
    }

    if (a == -1) cout << "-1\n";
    else cout << a << " " << b << "\n";
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
