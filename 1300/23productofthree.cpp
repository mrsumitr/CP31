//#include<bits/stdc++.h>
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

    int a = -1, b = -1, c = -1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            a = i;
            break;
        }
    }
    if (a == -1) {
        cout << "NO" << endl;
        return;
    }
    int remaining = n / a;
    for (int i = a + 1; i * i <= remaining; i++) {
        if (remaining % i == 0) {
            b = i;
            break;
        }
    }
    if (b != -1) {
        c = remaining / b;
        if (c > b && c != a) {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
            return;
        }
    }

    cout << "NO" << endl;
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