#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
int MOD=1e9+7;

bool check(ll mid, vector<vector<ll>> &v){
  ll n=v.size();
  ll m=v[0].size();
  ll l=0;
  ll r=mid;
  for(ll i=0; i<n; i++){
    if(i!=0){
     l = max(0LL, l - mid);
     r = min(1000000000LL, r + mid);

    }
    ll left=v[i][0];
    ll right=v[i][1];
    if(l>right || r<left){
      return false;
    }
    else{
      l = max(l, left);
      r = min(r, right);

    }
  }

  return true;
}
void mrsumit() {
    ll n;
    cin>>n;
    vector<vector<ll>> v(n, vector<ll>(2,0));
    ll r=0;
    for(ll i=0; i<n; i++){
      for(ll j=0; j<2; j++){
        cin>>v[i][j];
        r=max(r,v[i][j]);
      }
    }
    ll hi=r;
    ll lo=0;
    ll ans=hi;
    while(lo<=hi){
      ll mid=(lo+hi)/2;
      if(check(mid,v)){
        ans=mid;
        hi=mid-1;
      }
      else{
        lo=mid+1;
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