#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'

void solve() {
    ll n;
    char ch;
    cin >> n >> ch;
    string s;
    cin >> s;

    // If all characters are already 'ch'
    int cnt = count(s.begin(), s.end(), ch);
    if (cnt == n) {
        cout << 0 << nline;
        return;
    }

    // Check for 1-operation solution
    for (int x = 1; x <= n; x++) {
        bool ok = true;
        for (int i = x; i <= n; i += x) {
            if (s[i - 1] != ch) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << 1 << nline;
            cout << x << nline;
            return;
        }
    }

    // If no 1-operation solution, answer is always 2
    cout << 2 << nline;
    cout << n - 1 << " " << n << nline;
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
