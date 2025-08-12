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
    ll n,k;
    cin>>n>>k;
    vector<pair<int,int>> a(n);
    
    for(int i=0; i<n; i++){
        cin>>a[i].first;
    }
    for(int i=0; i<n; i++){
        cin>>a[i].second;
    }
    int bmax=0;
    ll ans=0;
    ll curr=0;
    for(int i=0; i<min(n,k); i++){
        curr+=a[i].first;
        bmax=max(bmax,a[i].second);
        ans=max(ans,curr+(k-(i+1))*bmax);
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