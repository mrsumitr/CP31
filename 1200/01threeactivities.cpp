//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long
#define nline '\n'

void solve() {

    ll n;
    cin>>n;
    vector<pair<ll,ll>> a(n),b(n),c(n);
    for(ll i=0; i<n; i++){
        ll data;
        cin>>data;
        a[i].first=data;
        a[i].second=i+1;
    }
    for(ll i=0; i<n; i++){
        ll data;
        cin>>data;
        b[i].first=data;
        b[i].second=i+1;
    }
    for(ll i=0; i<n; i++){
        ll data;
        cin>>data;
        c[i].first=data;
        c[i].second=i+1;
    }
    
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());
    ll ans=0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k <3; k++) {
                // take values
                ll sum = a[i].first + b[j].first + c[k].first;

                // check indices are distinct
                if(a[i].second != b[j].second && 
                   b[j].second != c[k].second && 
                   c[k].second != a[i].second) 
                {
                    ans = max(ans, sum);
                }
            }
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