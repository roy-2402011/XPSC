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
    int n, m;
    cin >> n >> m;

    vector<pair<string,string>> mp1(n);
    vector<pair<string,string>> mp2(m);

    for(int i = 0; i < n; i++)
    {
        cin >> mp1[i].first >> mp1[i].second;
    }


    for(int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;

        b.pop_back(); 

        mp2[i].first = a;
        mp2[i].second = b;
    }

    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(mp2[i].second == mp1[j].second)
            {
                cout << mp2[i].first << " "
                     << mp2[i].second << "; #"
                     << mp1[j].first << endl;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

/*
//   "Every error is a step closer to the solution."
//     @Author : Prasanjit Roy
*/