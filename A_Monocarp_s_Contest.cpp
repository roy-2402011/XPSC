
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
    int arr[n];
    // if(n==1) {
    //     cout<<-1<<endl;
    //     return;
    // }
    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0) cnt0++;
        if(arr[i]==1) cnt1++;
    }
    
     if( cnt0 >=2 )
     {  if(arr[0] ==0 && arr[n-1]==1 )
        cout<<1<<endl;

        else if(arr[0]==0 && arr[n-1]==0)
      {
        cout<<0<<endl;
      }
      else if((arr[0]==1 && arr[n-1]==1)  )
       {
        cout<<2<<endl;
       }
       else if((arr[0]==1 && arr[n-1]==0))
            cout<<1<<endl;
     
     }
     else cout<<-1<<endl;
  
    
    
     

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

