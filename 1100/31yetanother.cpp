//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long
#define nline '\n'
#include<list>
void solve() {
    ll n, q;
    cin >> n >> q;

    list<ll> dll;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        dll.push_back(x);
    }

    vector<ll> ans;

    while (q--) {
        ll qu;
        cin >> qu;  // read the query value

        auto it = find(dll.begin(), dll.end(), qu);
        int pos = 1;
        for (auto itr = dll.begin(); itr != it; ++itr) pos++;

        ans.push_back(pos);

        dll.erase(it);
        dll.push_front(qu);
    }

    for (auto it : ans) cout << it << " ";
    cout << nline;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while (t--) {
        solve();
    }
    return 0;
}