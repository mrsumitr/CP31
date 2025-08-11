#include<iostream>
using namespace std;
#define ll long long

void solve(){
    ll a, b;
    cin >> a >> b;

    ll diff = abs(a - b);
    if (diff == 0) {
        cout << "0 0" << '\n';
        return;
    }

    ll moves = min(a % diff, diff - (a % diff));
    cout << diff << " " << moves << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
