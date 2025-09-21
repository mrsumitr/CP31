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
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    ll size=1;
    ll ele=v.back();
    ll ans=0;
    for(int i=n-2; i>=0; i++){
        if(v[n-2]==ele){
            size++;
        }
        else{
            ans++;
            ll run=size;
            while(run){
                i++;
                size++;
            }
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