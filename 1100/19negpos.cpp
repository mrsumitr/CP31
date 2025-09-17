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
   ll cnt=0;
   ll minV=INT_MAX;
   ll ans=0;
   for(int i=0; i<n; i++){
    cin>>v[i];
    ans+=abs(v[i]);
    if(v[i]<0){
        cnt++;
    }
    minV=min(minV,abs(v[i]));
   } 
    if(cnt%2==0){
        cout<<ans<<endl;
    }
    else{
        cout<<ans-2*minV<<endl;
    }
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}