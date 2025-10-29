#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define nline '\n'
void mrsumit(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> next_diff(n);
    next_diff[n - 1] = n;
    for(int i = n - 2; i >= 0; i--) {
        if(v[i] == v[i + 1]) {
            next_diff[i] = next_diff[i + 1];
        } else {
            next_diff[i] = i + 1;
        }
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int k = next_diff[l];
        if(k <= r) {
            cout << l + 1 << " " << k + 1 << nline;
        } else {
            cout << "-1 -1" << nline;
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) mrsumit();
    return 0;
}
