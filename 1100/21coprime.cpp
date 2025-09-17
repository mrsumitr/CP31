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
#include<numeric>

void solve() {
    int n;
    cin >> n;
    vector<int> v(n); 
    for (int i = 0; i < n; i++) cin >> v[i];

    // store last (max) index for each value
    unordered_map<int,int> last;
    for (int i = 0; i < n; i++) {
        last[v[i]] = i+1; // store 1-based index
    }

    int ans = -1;
    for (auto &a : last) {
        for (auto &b : last) {
            if (__gcd(a.first, b.first) == 1) {
                ans = max(ans, a.second + b.second);
            }
        }
    }

    cout << ans << "\n";
}
    
    



   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}