#include <iostream>
#include <vector>
using namespace std;

#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    
    int count_of_zero = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 0) count_of_zero++;
    }

    // If all elements are zero
    if (count_of_zero == n) {
        cout << "0\n";
        return;
    }

    // Finding the leftmost and rightmost non-zero element
    int left = 0, right = n - 1;
    while (left < n && v[left] == 0) left++;
    while (right >= 0 && v[right] == 0) right--;

    // Check if there's any zero in between
    bool found_zero = false;
    for (int i = left; i <= right; i++) {
        if (v[i] == 0) {
            found_zero = true;
            break;
        }
    }

    // Output based on conditions
    if (!found_zero) cout << "1\n";
    else cout << "2\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
