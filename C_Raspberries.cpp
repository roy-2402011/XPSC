

// //   "Every error is a step closer to the solution." 
// //     @Author : Prasanjit Roy

//Date : 25 September , 2026
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    int ans = INT_MAX;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        
        int remainder = arr[i] % k;
        if(remainder == 0) {
            ans = 0;  
        } else {
            ans = min(ans, k - remainder); 
        }
    }

    
    if(k == 4) {
        int even_count = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] % 2 == 0) even_count++;
        }
        
        if(even_count >= 2) {
            ans = 0;  
        } else if(even_count == 1) {
            ans = min(ans, 1); 
        } else {
            ans = min(ans, 2);  
        }
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