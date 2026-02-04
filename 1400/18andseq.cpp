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
const int f=2e5+1;
vector<ll> pref(f);
int inv(int a, int b){
  if(b==0) return 1;
    ll t=inv(a,b/2);
    t=(t*t)%mod;
    if(b%2) return (a*t)%mod;
    return t;
}

void mrsumit() {
    int n;
    cin>>n;
    vector<int> v(n);
    int and_v;
    for(int i=0; i<n; i++){
      cin>>v[i];
      if(i==0){
        and_v=v[i];
      }
      and_v=and_v&v[i];
    }
    int endp=0;
    for(int i=0; i<n; i++){
      if(v[i]==and_v){
        endp++;
      }
    }
    if(endp < 2) {
        cout << 0 << endl;
        return;
    }
     ll ans = pref[n - 2];
     ll ways_to_pick_ends = (1LL * endp * (endp - 1)) % mod;
     ans = (ans * ways_to_pick_ends) % mod;
     cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    pref[0]=1;
    for(int i=1; i<=f; i++){
      pref[i]=(pref[i-1]*i)%mod;
    }
    while (t--) {
        mrsumit();
    }
    return 0;
}