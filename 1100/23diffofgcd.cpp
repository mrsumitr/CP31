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
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> ans;
    for(ll i=1; i<=n; i++){
        ll data=((l+i-1)/i)*i;
        if(data<=r){
            ans.push_back(data);
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<endl;


}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}