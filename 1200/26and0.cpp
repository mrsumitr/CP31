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

    ll mod=1e9+7;
    ll n,k;
    cin>>n>>k;
    ll ans = 1;
 
      for(int i = 0; i < k; i++) {
         ans = (ans * n) % mod;
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