#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        // Checking if it's possible to reach (c, d) from (a, b) in a straight line
        if (abs(c - a) != abs(d - b)) {
            cout << "-1" << endl;  // Not possible to reach
        } else {
            cout << abs(c - a) << endl;  // Minimum steps required
        }
    }
}

int main() {
    solve();
    return 0;
}
