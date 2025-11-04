//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
#include<set>
void mrsumit(){
int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    // Prefix sums for even and odd indices
    vector<ll> esum(n, 0), osum(n, 0);
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            esum[i] = esum[i - 1];
            osum[i] = osum[i - 1];
        }
        if (i % 2 == 0)
            esum[i] += v[i];
        else
            osum[i] += v[i];
    }

    // Difference between odd and even prefix sums
    vector<ll> diff(n);
    for (int i = 0; i < n; i++) {
        diff[i] = osum[i] - esum[i];
    }

    set<ll> seen;
    seen.insert(0); // handle prefix from start
    for (int i = 0; i < n; i++) {
        if (seen.count(diff[i])) {
            cout << "YES" << nline;
            return;
        }
        seen.insert(diff[i]);
    }

    cout << "NO" << nline;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}