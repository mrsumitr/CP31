//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'

void solve() {
    int n, s;
    cin >> n >> s;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int len = -1;
    map<int, int> mp;
    mp[0] = -1;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];

        if (mp.count(sum - s)) {
            len = max(len, i - mp[sum - s]);
        }

        if (!mp.count(sum)) {
            mp[sum] = i;
        }
    }

    if (len == -1)
        cout << "-1\n";
    else
        cout << (n - len) << "\n";
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