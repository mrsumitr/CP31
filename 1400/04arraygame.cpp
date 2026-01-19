#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    if (k >= 3) {
        cout << 0 << endl;
        return;
    }

    sort(v.begin(), v.end());

    ll min_val = v[0];
    for (int i = 0; i < n - 1; i++) {
        min_val = min(min_val, v[i + 1] - v[i]);
    }

    if (k == 1) {
        cout << min_val << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ll d = v[j] - v[i];
            
            
            auto it = lower_bound(v.begin(), v.end(), d);
            
         
            if (it != v.end()) {
                min_val = min(min_val, *it - d);
            }
            // Check the element before 'it' (< d)
            if (it != v.begin()) {
                min_val = min(min_val, d - *prev(it));
            }
        }
    }

    cout << min_val << endl;
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