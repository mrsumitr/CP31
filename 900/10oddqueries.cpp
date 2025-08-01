#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define nline '\n'

void solve() {
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n);
    vector<ll> prefix(n + 1, 0); // Prefix sum array

    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        prefix[i + 1] = sum; // Store cumulative sum
    }

    while (q--) {
        ll l, r, k;
        cin >> l >> r >> k;
        l--; r--; // Convert to 0-based index

        // Compute range sum in O(1) using prefix sum
        ll rangeSum = prefix[r + 1] - prefix[l];

        // Compute new sum
        ll newSum = sum - rangeSum + (r - l + 1) * k;

        if (newSum % 2 != 0) {
            cout << "YES" << nline;
        } else {
            cout << "NO" << nline;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
