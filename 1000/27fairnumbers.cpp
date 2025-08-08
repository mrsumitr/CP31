#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <bitset>
#include <climits>
#include <unordered_map>
#include <map>
#include <set>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nline '\n'

bool check(ll n) {
    ll temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0 && n % digit != 0) {
            return false; // early exit if not divisible
        }
        temp /= 10;
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;
    while (!check(n)) {
        n++;
    }
    cout << n << nline;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
