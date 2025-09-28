//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'

void solve() {

    ll n;
    cin>>n;
    vector<ll> v(n);
    map <ll,ll> mp;
    for(int i=0; i<n; i++) 
    {
    cin>>v[i];
    mp[v[i]]++;
    }
    ll ans=0;
    
        
    ll cnt=0;
    vector<pair<ll,ll>> a;
    
        for(auto it: mp){
            a.push_back({it.first,it.second});
        }
    sort(v.begin(),v.end());

    ll pop=0;
    while(pop!=n){
    for(int i=0; i<n-1; i++){
        
        if(a[i].second>0){
        

        
        }
        else{

        }


    }
    }

     

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}