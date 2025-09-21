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
    map<ll,ll> mp;
    for(int i=0; i<n; i++){
        ll data;
        cin>>data;
        mp[data]++;
    }

    
    
    for(auto it: mp){
        if(mp.find(it.first+k)!=mp.end() ||mp.find(it.first-k)!=mp.end() ){
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