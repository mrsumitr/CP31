#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> prefix(n), suffix(n);
    unordered_set<char> seen;

    // Prefix distinct characters
    for (int i = 0; i < n; i++) {
        seen.insert(s[i]);
        prefix[i] = seen.size();
    }

    seen.clear();

    // Suffix distinct characters
    for (int i = n - 1; i >= 0; i--) {
        seen.insert(s[i]);
        suffix[i] = seen.size();
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, prefix[i] + suffix[i + 1]);
    }

    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
