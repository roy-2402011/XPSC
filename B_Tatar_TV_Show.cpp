
// /*******************************************************
// *                                                      *
// *    “Saraswati Mahabhage, Vidye Kamalalochane         *
// *    Vishwarupe Vishalakshi, Vidyam Dehi Namostute.”   *
// *                                                      *
// *******************************************************/

// #include <bits/stdc++.h>
// using namespace std;

// #define ll   long long
// #define pb   push_back
// #define all(x) x.begin(), x.end()
// #define rep(i,a,b) for(int i=a; i<b; i++)

// const int INF  = 1e9;
// const ll  LINF = 1e18;
// const int MOD  = 1e9 + 7;

// void solve() {
    
//      int n,k;
//      cin>>n>>k;
//      string s;
//      cin>>s;

//     if(s[k-1]=='0')
//     {
//         s[k-1]='1';
//     }
//     if((2*k-1)<n)
//     {
//         s[2*k-1] ='0';
//     }
    
//     bool flag = true;


//     for(int i=0;i<n-1;i++)
//     {
//        int a =s[i]-'0';
//        int b =s[i+1]-'0';
//        if(a<b){
//         flag = false;
//         break;
//        }
       
//     }

//     if(!flag) cout<<"NO"<<endl;
//     else cout<<"YES"<<endl;



// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1;
//     cin >> t;  
//     while (t--) solve();

//     return 0;
// }


// //   "Every error is a step closer to the solution." 
// //     @Author : Prasanjit Roy


/*******************************************************
*                                                      *
*    “Saraswati Mahabhage, Vidye Kamalalochane         *
*    Vishwarupe Vishalakshi, Vidyam Dehi Namostute.”   *
*                                                      *
*******************************************************/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rep(i,a,b) for(int i=a; i<b; i++)

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
//Date : 22 Sep, 2026
void solve() {

     

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> cnt(k, 0);

        for (int i = 0; i < n; i++)
            cnt[i % k] += s[i] - '0';

        bool ok = true;

        for (int r = 0; r < k; r++) {

            if (cnt[r] % 2) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

// "Every error is a step closer to the solution."
// @Author : Prasanjit Roy