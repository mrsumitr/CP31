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
    vector<ll> v(n);
    vector<ll> a(n);
    unordered_map<ll,ll> mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    for(auto it: mp){
        if(it.second>1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}