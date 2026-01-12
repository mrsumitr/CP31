#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
int mod=1e9+7;
vector<ll> adj[100005];
ll cnt[2];
void dfs(ll u,ll p, ll c) {
    cnt[c]++;
    for (ll v : adj[u]) {
        if (v != p) {
            dfs(v, u, 1 - c);  
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin>>n;
    
    for(ll i=0;  i<n-1; i++){
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);

    }
    dfs(1,-1,0);
    ll ans=((cnt[1]*cnt[0])-n+1);
    cout<<ans<<'\n';
    return 0;
}