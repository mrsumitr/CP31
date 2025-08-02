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


void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    if(n==1){
        cout<<2*1*v[0].first<<nline;
        cout<<"0 1"<<nline;
        return;
    }
    sort(v.rbegin(), v.rend());
    ll index=0;
    ll pos=1;
    ll time=0;
    vector<ll> ans(n+1,0);
    while(index<n){
        time+=2*pos*v[index].first;
        ans[v[index].second+1]=pos;
        index++;
        if(index<n){
            time+=2*pos*v[index].first;
            ans[v[index].second+1]=-pos;
            pos++;
            index++;
        }
    }
    cout<<time<<nline;
    for(int i=0; i<=n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<nline;
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}