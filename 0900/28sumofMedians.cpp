#include<iostream>
#include<vector>
using namespace std;
#define ll long long

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<int> v(n * x);
    for (int i = 0; i < n * x; i++) {
        cin >> v[i];
    }

    ll sum = 0;
    int k = n / 2;  // steps to move to pick elements
    int index = n * x - k - 1;  // starting index

    for (int i = 0; i < x; i++) {
        sum += v[index];
        index -= (k + 1);  // move back k+1 elements
    }

    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
