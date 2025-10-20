//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
#include<set>
void solve() {

    ll n;
    cin>>n;
    vector<ll> v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }

   ll ans=0;
   map<ll,ll> counts;
    for (int i = 1; i <= n; i++) {
        ll diff = v[i] - i;
        
        ans += counts[diff]; 
        counts[diff]++; 
        
    }
    cout<<ans<<nline;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}