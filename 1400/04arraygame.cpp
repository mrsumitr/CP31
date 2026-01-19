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
void mrsumit() {
    int n,k;
    cin>>n>>k;
    vector<ll> v;
    map<ll,ll> mp;
    bool ans=false;
    for(int i=0; i<n; i++){
      int data;
      cin>>data;
      v.push_back(data);
      mp[data]++;
      if(mp[data]>1){
        ans=true;
      }
    }
    if(ans){
      cout<<0<<endl;
      return;
    }
    if(k>=3){
      cout<<0<<endl;
      return;
    } 
    sort(v.begin(),v.end());
    ll minv=v[0];
    vector<int> arr;
    bool 2n=false;
    for(int i=0; i<n-1; i++){
      for(int j=i+1; k<n; j++){
        ll diff=v[j]-v[i];
        arr.push_back(diff);
        if(mp.find(diff)!=mp.end()){
          2n=true;
        }
        minv=min(minv,diff);
      }
    }
    if(k==1){
      cout<<minv<<endl;
      return;
    }
    if(2n){
      cout<<0<<endl;
    }
    else{
      for(int i=0; i<(int)arr.size(); i++){
          for(int j=0; j<(int)v.size(); j++){
            ll diff=abs(v[i]-arr[j]);
            minv=min(minv,diff);
          }
      }
    }
    cout<<minv<<endl;

    
    
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