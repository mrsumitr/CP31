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

ll ceilsqrt(ll n){
    long long x=sqrtl(n);
    if(1LL*x*x>=n) return x;
    return x+1;
}
ll reqC(ll mid, vector<ll> &v,ll c) {
    ll req = 0;
    for (int i = 0; i < v.size(); i++) {
        ll term = v[i] + 2 * mid;
        req += term * term;
        if(req>c) break;
    }
    return (ll)req;
}
void solve(){
  ll n,c;
  cin>>n>>c;
  ll ans=0;
  vector<ll> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());  
  ll low=1;
  ll sqrtc=ceilsqrt(c);
  ll high=(sqrtc-v[0]+1)/2;


while(low<=high){
    ll mid=(low+high)/2;
    ll req=reqC(mid,v,c);
    if(req<=c){
        ans=mid;
        low=mid+1;
        
    }
    else{
        high=mid-1;
    }
}
    cout<<ans<<endl;
}



   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}