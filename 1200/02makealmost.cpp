#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long
#define nline '\n'

void solve() {


    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    
    for(int i=1; i<60; i++){
        ll data=1LL<<i;
        set<ll> s;
        for(int j=0; j<n; j++){
            s.insert(v[j]%data);
        }
        if(s.size()==2){
            cout<<data<<nline;
            return;
        }
    }
    
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