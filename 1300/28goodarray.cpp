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
    vector<pair<ll,ll>> v(n);
    vector<int> ans;
    for(int i=0; i<n; i++){
      ll in=i+1;
      ll data;
      cin>>data;
      v[i].first=data;
      v[i].second=in;
    }
    sort(v.begin(),v.end(),[](auto a, auto b){
      if(a.first==b.first){
        return a.second>b.second;
      }
      return a.first<b.first;
    });
    vector<ll> psum(n-1);
    for(int i=0; i<n-1; i++){
      psum[i]=v[i].first;
      if(i) psum[i]+=psum[i-1];
    }
    ll sum=psum[n-2];
    ll cmp=v[n-1].first;
    for(int i=0; i<n-1; i++){
      if(sum-v[i].first==cmp){
        ans.push_back(v[i].second);
      }
    }
    cmp=v[n-2].first;
    sum=psum[n-3];
    if(sum==cmp){
      ans.push_back(v[n-1].second);
    }
    if(v.empty()){
        cout<<0<<endl;
    }
    else{
        cout<<ans.size()<<endl;
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<endl;
    }
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