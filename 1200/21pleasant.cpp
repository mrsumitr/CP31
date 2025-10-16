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

    ll n;
    cin>>n;
    
    vector<ll> pos(2 * n + 1, 0);
    vector<ll> a(n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        pos[a[i]] = i;  
    }

    ll ans = 0;

  
    for (ll i = 1; i <= n; ++i) {
        
        for (ll sum = a[i]; sum <= 2 * n; sum += a[i]) {
            ll val_j = sum / a[i]; 
            if (pos[val_j] > 0) {
                ll j = pos[val_j];
                if (i < j && i + j == sum) {
                    ans++;
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