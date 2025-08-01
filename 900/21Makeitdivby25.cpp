#include<iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int ans = 1e9;

    // Try all possible valid endings for numbers divisible by 25
    string targets[] = {"00", "25", "50", "75"};

    for (string t : targets) {
        int pos = -1;
        // Find last digit of target
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == t[1]) {
                // Now find the second last digit of target before this one
                for (int j = i - 1; j >= 0; j--) {
                    if (s[j] == t[0]) {
                        // Count digits to be removed = total - 2 - index of first
                        ans = min(ans, (n - j - 2));
                        break;
                    }
                }
            }
        }
    }

    if (ans == 1e9) {
        cout << -1 << '\n'; // Not possible
    } else {
        cout << ans << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
         