#include <iostream>
using namespace std;

#define ll long long

void solve() {
    ll n;
    cin >> n;

    // If n is not divisible by either 4 or 6, it's impossible
    if (n % 2 != 0 || n < 4) {
        cout << "-1" << endl;
        return;
    }

    // Maximum buses: Using only 4-wheel buses
    ll max_buses = n / 4;

    // Minimum buses: Try using as many 6-wheel buses as possible
    ll min_buses = n / 6;
    if (n % 6 != 0) {
        min_buses++; // Add one 4-wheel bus if necessary
    }

    cout << min_buses << " " << max_buses << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
