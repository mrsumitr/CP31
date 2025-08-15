//#include <bits/stdc++.h>
using namespace std;
#include<iostream>
#include<vector>
#define ll long long

ll getRequired(const vector<int>& v, ll mid) {
    ll req = 0;
    for (auto val : v) {
        if (val < mid) req += (mid - val);
        else break; // since sorted
    }
    return req;
}

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    ll low = v[0], high = v.back() + x; 
    ll ans = v[0];

    while (low <= high) {
        ll mid = (low + high) / 2;
        ll req = getRequired(v, mid);

        if (req <= x) { 
            ans = mid; // possible answer, try higher
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
