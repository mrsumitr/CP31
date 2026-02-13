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
    vector<int> v(n+1);
    map<int,ll> mp;
    for(int i=1; i<n; i++){
      cin>>v[i];
      int diff=v[i]-i;
      mp[diff]+=v[i];
    }
    if(n==1){
      cout<<v[0]<<endl;
      return;
    }
    ll ans=0;
    for(auto it: mp){
      ans=max(ans,it.second);
          }

    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}