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
   vector<ll> v(n);
   for(int i=0; i<n; i++){
    cin>>v[i];
   } 
   sort(v.begin(),v.end());
    ll s=0;
    ll e=n-1;
    while(s<=e && k){
        if(s+1<e){
            ll sum=v[s]+v[s+1];
            if(sum<v[e]){
                s=s+2;
            }
            else{
                e--;
            }
        }
        else{
            e--;
        }
        k--;
    }
    if(k>0){
        cout<<"0"<<endl;
    }
    ll ans=0;
    
        for(int i=e; i<=s; i++){
            ans+=v[i];
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