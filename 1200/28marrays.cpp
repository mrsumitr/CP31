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


    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    vector<ll> freq(m,0);
    for(ll i=0; i<n; i++) 
    {
        cin>>v[i];
        ll da=v[i]%m;
        freq[da]++;
    }
    ll ans=0;
    if(freq[0]){
        ans++;
    }
    if(m%2==0){
        if(freq[m/2]){
            ans++;
        }
    }
    ll st=1;
    ll e=m-1;
    while (st < e) {
    if (freq[st] == 0 && freq[e] == 0) {
        
    } else {
        ans++; 
        ll diff = abs(freq[st] - freq[e]);
        if (diff > 1) ans += diff - 1;
    }
    st++;
    e--;
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