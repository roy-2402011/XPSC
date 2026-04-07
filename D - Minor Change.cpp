#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();
    string s,t;
    cin>>s>>t;
    int cnt =0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] != t[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

// PRASANJIT ROY , CS learner
