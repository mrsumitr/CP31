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
    cin >> n;
    vector<pair<ll,ll>> v(n);
    
    for (int i = 0; i < n; i++) {
        ll data;
        cin >> data;
        v[i] = {data, i};
    }
    
    if (n == 1) {
        cout << 0 << nline;
        return;
    }
    
    map<int, ll> freq;
    for (auto &p : v) {
        int msb = 63 - __builtin_clzll(p.first);
        freq[msb]++;
    }
    
    ll ans = 0;
    for (auto &[bit, cnt] : freq) {
        ans += cnt * (cnt - 1) / 2;
    }

    cout << ans << nline;
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