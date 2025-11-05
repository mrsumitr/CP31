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
ll facto(ll val, ll mod) {
    ll fac = 1;
    for (int i = 1; i <= val; i++) {
        fac = (fac * i) % mod;
    }
    return fac;
}

void mrsumit() {
    ll mod = 998244353;
    string s;
    cin >> s;
    ll n = s.length();
    vector<ll> tocal;
    char ch = s[0];

    if (n == 1) {
        cout << "0 1" << nline;
        return;
    }

    int cnt = 1;
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] != ch) {
            if (cnt > 1) {
                tocal.push_back(cnt);
                ans += cnt - 1;
            }
            cnt = 1;
            ch = s[i];
        } else {
            cnt++;
        }
    }
    if (cnt > 1) {
        tocal.push_back(cnt);
        ans += cnt - 1;
    }

    if (ans == 0) {
        cout << "0 1" << nline;
        return;
    }

    ll prod_k = 1;
    for (int i = 0; i < tocal.size(); i++) {
        prod_k = (prod_k * tocal[i]) % mod;
    }

    ll fact_m = facto(ans, mod);
    ll total_ways = (fact_m * prod_k) % mod;

    cout << ans << " " << total_ways << nline;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}