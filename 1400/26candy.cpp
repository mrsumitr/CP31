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
    cin>>n;
    vector<int> v(n);
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
      cin>>v[i];
      mp[v[i]]++;
    }
    
    vector<int> f;
    for (auto const& [val, count] : mp) {
        f.push_back(count);
    }
    sort(f.begin(), f.end(), greater<int>());
    
    ll ans = 0;
    int max_allowable = f[0];
    for (int i = 0; i < f.size(); i++) {
    
        if (f[i] > max_allowable) {
            f[i] = max_allowable;
        }
        if (f[i] > 0) {
            ans += f[i];
    
            max_allowable = f[i] - 1;
        }
        else {
            break;
        }
    }
    cout<<ans<<endl;
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