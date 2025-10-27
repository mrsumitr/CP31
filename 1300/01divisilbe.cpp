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

    ll ans=0;
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll> v(n);
    map <pair<ll,ll>,ll> mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        ll rem_x=v[i]%a;
        ll rem_y=v[i]%b;
        ll target_x=(a-rem_x)%a;
        ll target_y=rem_y;

        pair<ll,ll> target_key={target_x,target_y};

        if(mp.count(target_key)){
            ans+=mp[target_key];
        }

        pair<ll,ll> current_key={rem_x,rem_y};
        mp[current_key]++;

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