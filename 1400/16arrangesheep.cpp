#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
int mod=1e9+7;
void mrsumit() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> pos;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') pos.push_back(i);
    }

    if (pos.empty()) {
        cout << 0 << endl;
        return;
    }

    int mid_idx = pos.size() / 2;
    int mid_pos = pos[mid_idx];
    long long ans = 0;

    for (int i = 0; i < pos.size(); i++) {
        int target_pos = mid_pos - (mid_idx - i);
        ans += abs(pos[i] - target_pos);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}