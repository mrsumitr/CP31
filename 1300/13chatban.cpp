#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum_inc(ll m) {
    return m * (m + 1) / 2;
}

ll sum_dec(ll k, ll d) {
    // sum of k-1 + k-2 + ... + k-d
    return d * (2 * k - d - 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll k, x;
        cin >> k >> x;

        ll S1 = sum_inc(k);

        // Case 1: banned in increasing phase
        if (x <= S1) {
            ll l = 1, r = k;
            while (l < r) {
                ll m = (l + r) / 2;
                if (sum_inc(m) >= x) r = m;
                else l = m + 1;
            }
            cout << l << "\n";
            continue;
        }

        // Case 2: go to decreasing phase
        ll x_left = x - S1;

        ll l = 1, r = k - 1;
        while (l < r) {
            ll m = (l + r) / 2;
            if (sum_dec(k, m) >= x_left) r = m;
            else l = m + 1;
        }

        if (sum_dec(k, l) < x_left) {
            cout << 2 * k - 1 << "\n";
        } else {
            cout << k + l << "\n";
        }
    }
    return 0;
}
