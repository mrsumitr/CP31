#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define ll long long
#define nline '\n'

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    if (a == b) {
        cout << "YES" << nline;
        return;
    }

    vector<int> balance(n);
    int current_balance = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == '1') current_balance++;
        else current_balance--;
        balance[i] = current_balance;
    }

    bool is_flipped = false;
    for (int i = n - 1; i >= 0; i--) {
        char current_a_char = a[i];
        if (is_flipped) current_a_char = (a[i] == '1' ? '0' : '1');

        if (current_a_char == b[i]) continue;
        else {
            if (balance[i] != 0) {
                cout << "NO" << nline;
                return;
            }
            is_flipped = !is_flipped;
        }
    }
    cout << "YES" << nline;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
