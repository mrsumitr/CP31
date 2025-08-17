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
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<ll,ll>> v(n);
    ll x,y;
    ll xi,yi;
    for(int i=0; i<n; i++){
        ll s,w;
        cin>>s>>w;
        v[i].first=s;
        v[i].second=w;
        if(i==a-1){
            x=s;
            y=w;
        }
        if(i==b-1){
            xi=s;
            yi=w;
        }
    }
    ll ans=abs(x-xi)+abs(y-yi);
    if(k==0){
        cout<<ans<<endl;
        return;
    }
    if(a<=k){
        if(b<=k){
            cout<<"0"<<endl;
        }
        else{
        ll mint=0;
        ll mintt=1e18;
        for(int i=0; i<k; i++){
            mint=abs(xi-v[i].first)+abs(yi-v[i].second);
            mintt=min(mint,mintt);
        }
        cout<<min(ans,mintt)<<endl;
        }
    }
    else{
        if(b<=k){
            ll mint=0;
            ll mintt=1e18;
        for(int i=0; i<k; i++){
            mint=abs(x-v[i].first)+abs(y-v[i].second);
            mintt=min(mintt,mint);
        }
        cout<<min(ans,mintt)<<endl;
        }
        else{
        ll mint=0;
        ll mintt=1e18;
        for(int i=0; i<k; i++){
            mint=abs(x-v[i].first)+abs(y-v[i].second);
            mintt=min(mintt,mint);
        } 
        ll ot=0;
        ll ott=1e18;
        for(int j=0; j<k; j++){
            ot=abs(xi-v[j].first)+abs(yi-v[j].second);
            ott=min(ot,ott);
        }
        cout<<min(ans,ott+mintt)<<endl;
        }
    }
    


}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}