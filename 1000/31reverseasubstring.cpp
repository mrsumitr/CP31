//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<unordered_map>
#include<map>
#include<set>


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string sorted_s = s;
    sort(sorted_s.begin(), sorted_s.end());

    if (s == sorted_s) {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            cout << "YES\n" << i + 1 << " " << i + 2 << "\n";
            return;
        }
    }
}



   
int main(){
    int t=1;
    while(t--){
    solve();
    }
}