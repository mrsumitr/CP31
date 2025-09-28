//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'

void solve() {

    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    vector<pair<ll,ll>> query(q);
    for(ll i=0; i<n; i++) cin>>v[i];
    for(ll i=0; i<q; i++) 
    {
        ll data;
        cin>>data;
        query[i]={data,i};
    }
    
    sort(query.begin(),query.end());
    vector<ll> psum(n+1,0);
    vector<ll> ans(q);
    for(ll i=0; i<n; i++){
        psum[i+1]=psum[i]+v[i];
        //1 indexed
    }
    ll start=0;
    for(ll i=0; i<q; i++){
        ll step=query[i].first;
        ll in=query[i].second;
    
        while(start<n && step>=v[start]) start++;

        if(start==n) ans[in]=psum.back();
        else ans[in]=psum[start];

    }
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<nline;

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