//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#include<map>
#define ll long long
#define nline '\n'

void solve() {

    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v;
    for(int i=0; i<n; i++){
        vector<ll> a(m);
        for(int i=0; i<m; i++){
            cin>>a[i];
        }
        v.push_back(a);
    }
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    ll ans=0;
    for(int i=0; i<m; i++){
        vector<ll> an;
        for(int j=0; i<n; j++){
            an.push_back(v[j][i]);
        }
        sort(an.begin(),an.end());
        ll in=-n+1;
        for(int i=0; i<n; i++){
            ans+=(an[i]*in);
            in+=2;
        }
    }

    cout<<ans<<endl;
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