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
    cin >> s;

    vector<int> rem(s.size(),0);

    rep(i,0,s.size()) {

        if(s[i]=='b') {

            rem[i]=1;

            for(int j=i-1;j>=0;j--) {

                if(rem[j]==0 && s[j]>='a' && s[j]<='z') {
                    rem[j]=1;
                    break;
                }
            }
        }

        else if(s[i]=='B') {

            rem[i]=1;

            for(int j=i-1;j>=0;j--) {

                if(rem[j]==0 && s[j]>='A' && s[j]<='Z') {
                    rem[j]=1;
                    break;
                }
            }
        }
    }

    string ans="";

    rep(i,0,s.size()) {
        if(rem[i]==0) ans+=s[i];
    }

    cout << ans << endl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}


//   "Every error is a step closer to the solution."
//     @Author : Prasanjit Roy