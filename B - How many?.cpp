#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();
    int s,t;
    cin>>s>>t;
    int cnt=0;
    for(int a=0;a<=s;a++)
    {
        for(int b=0;b<=s;b++)
        {
            for(int c=0;c<=s;c++ )
            {
                if(a*b*c<=t && a+b+c <= s) cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0; 
}

// PRASANJIT ROY , CS learner
